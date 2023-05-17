/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsishika <syi378039@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 16:01:25 by tsishika          #+#    #+#             */
/*   Updated: 2023/05/17 00:03:26 by tsishika         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libc.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t		i;
	char		*buff_dst;
	const char	*buff_src;

	i = 0;
	buff_dst = (char *)dst;
	buff_src = (const char *)src;
	while (i < n)
	{
		buff_dst[i] = buff_src[i];
		i++;
	}
	return (dst);
}
