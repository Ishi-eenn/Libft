/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsishika <tsishika@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 17:21:12 by tsishika          #+#    #+#             */
/*   Updated: 2023/05/19 14:49:46 by tsishika         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t			i;
	unsigned char	*buff_s;
	unsigned char	buff_c;

	i = 0;
	buff_s = (unsigned char *)s;
	buff_c = (unsigned char)c;
	while (buff_s[i] != '\0')
	{
		if (buff_s[i] == buff_c)
			return ((char *)&buff_s[i]);
		i++;
	}
	if (buff_s[i] == buff_c)
		return ((char *)&buff_s[i]);
	return (NULL);
}
