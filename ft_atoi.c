/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsishika <syi378039@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 16:00:45 by tsishika          #+#    #+#             */
/*   Updated: 2023/05/21 18:15:54 by tsishika         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(int c)
{
	return ((c == ' ') || (9 <= c && c <= 13));
}

static long	ft_isover(long n, char c)
{
	long	sum;
	long	buff_c;

	sum = n * 10;
	buff_c = c - '0';
	return (sum / 10 != n || LONG_MAX - buff_c < sum);
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
		if (ft_isover(n, *str))
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
