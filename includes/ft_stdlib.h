/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stdlib.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsishika <tsishika@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 18:34:54 by tsishika          #+#    #+#             */
/*   Updated: 2023/11/23 18:36:49 by tsishika         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STDLIB_H
# define FT_STDLIB_H

#include <stddef.h>
#include <limits.h>

// ft_atoi.c
int		ft_atoi(const char *str);

// ft_calloc.c
void	*ft_calloc(size_t count, size_t size);

// ft_itoa.c
char	*ft_itoa(int n);

#endif
