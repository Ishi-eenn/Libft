/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsishika <tsishika@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 17:19:50 by tsishika          #+#    #+#             */
/*   Updated: 2023/05/16 18:01:40 by tsishika         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] == src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	strdup(const char *s1)
{
	int		i;
	char	*dest;

	i = ft_strlen(s1);
	dest = malloc(sizeof(char) * i);
	if (dest == NULL)
		return (0);
	else
		return (ft_strcpy(dest, s1));
}
