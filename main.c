/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsishika <syi378039@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 16:02:13 by tsishika          #+#    #+#             */
/*   Updated: 2023/05/18 16:47:25 by tsishika         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

int main(void){
	char n;
	scanf("%c", &n);
	printf("isalpha   : %d\n", ft_isalpha(n));
	printf("isdigit   : %d\n", ft_isdigit(n));
	printf("isalnum   : %d\n", ft_isalnum(n));
	printf("isascii   : %d\n", ft_isascii(n));
	printf("isprint   : %d\n", ft_isprint(n));

	char str[100], buff_str[100];
	scanf("%s", str);
	strcpy(buff_str, str);
	size_t cnt = ft_strlen(str);
	printf("strlen    : %zu\n", cnt);
	ft_memset(str, 97, cnt);
	printf("ft_memset : %s -> %s\n", buff_str, str);
	strcpy(buff_str, str);
	ft_bzero(str, cnt);
	printf("ft_bzero  : %s -> %s\n", buff_str, str);
	return (0);
}
