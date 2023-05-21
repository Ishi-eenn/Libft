/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsishika <syi378039@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 16:01:31 by tsishika          #+#    #+#             */
/*   Updated: 2023/05/21 16:25:26 by tsishika         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*buff;
	size_t	i;

	buff = (unsigned char *)b;
	i = 0;
	while (i < len)
	{
		buff[i] = c;
		i++;
	}
	return (b);
}
