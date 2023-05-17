/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsishika <syi378039@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 16:01:28 by tsishika          #+#    #+#             */
/*   Updated: 2023/05/17 19:34:27 by tsishika         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dst, const void *src, size_t len)
{
	size_t		i;
	char		*buff_dst;
	const char	*buff_src;

	i = 0;
	buff_dst = (char *)dst;
	buff_src = (const char *)src;
	while (i < len)
	{
		buff_dst[i] = buff_src[i];
		i++;
	}
	return (dst);
}
