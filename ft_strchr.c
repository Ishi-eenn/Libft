/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsishika <syi378039@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 17:21:12 by tsishika          #+#    #+#             */
/*   Updated: 2023/05/21 17:57:36 by tsishika         ###   ########.fr       */
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
