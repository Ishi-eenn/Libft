/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsishika <syi378039@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 16:01:19 by tsishika          #+#    #+#             */
/*   Updated: 2023/05/17 19:59:47 by tsishika         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	const unsigned char	*buff;

	buff = (const unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (buff[i] == c)
			return ((void *)&buff[i]);
		i++;
	}
	return (NULL);
}
