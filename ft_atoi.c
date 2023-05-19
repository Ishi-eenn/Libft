/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsishika <tsishika@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 16:00:45 by tsishika          #+#    #+#             */
/*   Updated: 2023/05/19 14:29:36 by tsishika         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// int	ft_atoi(const char *str)
// {
// 	size_t	nb;
// 	size_t	sign;

// 	sign = 1;
// 	nb = 0;
// 	while ((9 <= *str && *str <= 13) || *str == ' ')
// 		str++;
// 	if (*str == '-')
// 		sign *= -1;
// 	if (*str == '-' || *str == '+')
// 		str++;
// 	while ('0' <= *str && *str <= '9')
// 	{
// 		nb = nb * 10 + (*str - '0');
// 		str++;
// 	}
// 	return ((int)(sign * nb));
// }

long long	ft_atoll(const char *str);

int	ft_atoi(const char *str)
{
	return ((int)ft_atoll(str));
}

long long	ft_atoll(const char *str)
{
	size_t	nb;
	size_t	sign;

	sign = 1;
	nb = 0;
	while ((9 <= *str && *str <= 13) || *str == ' ')
		str++;
	if (*str == '-')
		sign *= -1;
	if (*str == '-' || *str == '+')
		str++;
	while ('0' <= *str && *str <= '9')
	{
		nb = nb * 10 + (*str - '0');
		str++;
	}
	return ((long long)(sign * nb));
}
