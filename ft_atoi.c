/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsishika <syi378039@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 16:00:45 by tsishika          #+#    #+#             */
/*   Updated: 2023/05/20 01:24:16 by tsishika         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(int c)
{
	return ((c == ' ') || (9 <= c && c <= 13));
}

static long	ft_isoverflow(long n, char c)
{
	long	square;
	long	long_c;

	square = n * 10;
	long_c = (long)(c - '0');
	return (square / 10 != n || LONG_MAX - long_c < square);
}

static long	ft_strtol(const char *str)
{
	long	n;
	int		sign;

	while (ft_isspace(*str))
		str++;
	sign = 1;
	if (*str == '-')
		sign *= -1;
	if (*str == '-' || *str == '+')
		str++;
	n = 0;
	while (ft_isdigit(*str))
	{
		if (ft_isoverflow(n, *str))
		{
			if (sign < 0)
				return (LONG_MIN);
			else
				return (LONG_MAX);
		}
		n = (n * 10) + (*str - '0');
		str++;
	}
	return (n * sign);
}

int	ft_atoi(const char *str)
{
	return ((int)ft_strtol(str));
}
