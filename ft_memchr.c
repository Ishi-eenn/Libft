/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsishika <syi378039@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 16:01:19 by tsishika          #+#    #+#             */
/*   Updated: 2023/05/19 00:57:38 by tsishika         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*buff_s;
	unsigned char	buff_c;

	i = 0;
	buff_s = (unsigned char *)s;
	buff_c = (unsigned char)c;
	while (i < n)
	{
		if (buff_s[i] == buff_c)
			return ((void *)&buff_s[i]);
		i++;
	}
	return (NULL);
}
