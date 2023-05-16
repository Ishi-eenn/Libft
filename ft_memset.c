/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsishika <tsishika@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 16:01:31 by tsishika          #+#    #+#             */
/*   Updated: 2023/05/16 16:01:32 by tsishika         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char	*buff;
	size_t	i;

	buff = (char *)b;
	i = 0;
	while (i < len)
	{
		buff[i] = (char)c;
		i++;
	}
	return (b);
}
