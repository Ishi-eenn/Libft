/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsishika <syi378039@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 16:01:52 by tsishika          #+#    #+#             */
/*   Updated: 2023/05/17 12:14:39 by tsishika         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	size_t	max;

	i = 0;
	max = -1;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			max = i;
		i++;
	}
	if (max == (size_t)-1)
		return (NULL);
	return ((char *)&s[max]);
}
