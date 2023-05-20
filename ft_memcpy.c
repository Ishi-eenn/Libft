/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsishika <tsishika@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 16:01:25 by tsishika          #+#    #+#             */
/*   Updated: 2023/05/20 18:46:50 by tsishika         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libc.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*buff_dst;
	unsigned char	*buff_src;

	if (dst == NULL && src == NULL)
		return (NULL);
	i = 0;
	buff_dst = (unsigned char *)dst;
	buff_src = (unsigned char *)src;
	while (i < n)
	{
		buff_dst[i] = buff_src[i];
		i++;
	}
	return (dst);
}
