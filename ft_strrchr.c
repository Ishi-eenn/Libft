/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsishika <tsishika@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 16:01:52 by tsishika          #+#    #+#             */
/*   Updated: 2023/05/19 19:13:01 by tsishika         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t			i;
	unsigned char	*buff_s;
	unsigned char	buff_c;

	i = ft_strlen(s);
	buff_s = (unsigned char *)s;
	buff_c = (unsigned char)c;
	while (i > 0)
	{
		if (buff_s[i] == buff_c)
			return ((char *)&buff_s[i]);
		i--;
	}
	if (buff_s[i] == buff_c)
		return ((char *)&buff_s[i]);
	return (NULL);
}
