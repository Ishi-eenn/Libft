/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsishika <syi378039@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 16:01:47 by tsishika          #+#    #+#             */
/*   Updated: 2023/05/19 00:48:54 by tsishika         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*buff_s1;
	unsigned char	*buff_s2;

	i = 0;
	buff_s1 = (unsigned char *)s1;
	buff_s2 = (unsigned char *)s2;
	while (i < n)
	{
		if (buff_s1[i] != buff_s2[i]
			|| buff_s1[i] == '\0' || buff_s2[i] == '\0')
			return ((int)(buff_s1[i] - buff_s2[i]));
		i++;
	}
	return (0);
}
