/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsishika <syi378039@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 00:10:44 by tsishika          #+#    #+#             */
/*   Updated: 2023/05/20 01:44:09 by tsishika         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	intlen(int n)
{
	size_t	len;
	long	buff_n;

	buff_n = n;
	len = 0;
	if (0 >= n)
	{
		len++;
		buff_n *= -1;
	}
	while (buff_n > 0)
	{
		len++;
		buff_n /= 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	size_t	len;
	long	buff_n;
	char	*p;

	len = intlen(n);
	p = malloc(sizeof(char) * (len + 1));
	buff_n = n;
	if (p == NULL)
		return (NULL);
	if (n < 0)
		buff_n *= -1;
	p[len] = '\0';
	while (len > 0)
	{
		p[len - 1] = (buff_n % 10) + '0';
		buff_n /= 10;
		len--;
	}
	if (n < 0)
		p[len] = '-';
	return (p);
}

// #include <stdio.h>

// int main(void){
// 	int n;
// 	scanf("%d", &n);
// 	printf("%s\n", ft_itoa(n));
// 	return (0);
// }
