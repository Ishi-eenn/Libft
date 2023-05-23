/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsishika <syi378039@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 16:00:45 by tsishika          #+#    #+#             */
/*   Updated: 2023/05/22 11:35:08 by tsishika         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(int c)
{
	return ((c == ' ') || (9 <= c && c <= 13));
}

static long	ft_isoverflow(long n, int d, int sign)
{
	if (n * sign > LONG_MAX / 10
		|| (n * sign == LONG_MAX / 10 && d > LONG_MAX % 10))
		return (1);
	if (n * sign < LONG_MIN / 10
		|| (n * sign == LONG_MIN / 10 && d > -1 * (LONG_MIN % 10)))
		return (-1);
	return (0);
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
		if (ft_isoverflow(n, *str - '0', sign) == 1)
			return (LONG_MAX);
		else if (ft_isoverflow(n, *str - '0', sign) == -1)
			return (LONG_MIN);
		n = (n * 10) + (*str - '0');
		str++;
	}
	return (n * sign);
}

int	ft_atoi(const char *str)
{
	return ((int)ft_strtol(str));
}
