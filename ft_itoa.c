/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsishika <tsishika@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 00:10:44 by tsishika          #+#    #+#             */
/*   Updated: 2023/05/20 18:46:30 by tsishika         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_intlen(int n)
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

	len = ft_intlen(n);
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
