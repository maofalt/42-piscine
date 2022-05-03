/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoc.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motero <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 21:29:24 by motero            #+#    #+#             */
/*   Updated: 2022/02/20 02:24:39 by motero           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

int	ft_isnum(char *c)
{
	int	i;

	i = 0;
	while (c[i] >= 48 && c[i] <= 57)
		i++;
	return (i);
}

int	ft_lsign(char *c)
{
	int	i;

	i = 0;
	if (c[i] == 43 || c[i] == 45)
		i++;
	return (i);
}

int	ft_isspace(char *c)
{
	int	i;

	i = 0;
	while (c[i] == 32 || (c[i] >= 9 && c[i] <= 13))
		i++;
	return (i);
}

int	ft_sign(char c)
{
	int	sign;

	sign = 1;
	if (c == 43 || c == 45)
	{
		if (c == 45)
			sign = -sign;
	}
	return (sign);
}

int	ft_atoi(char *str)
{
	int	length;
	int	sign;
	int	l_nbr;
	int	num;
	int	i;

	length = ft_isspace(str);
	sign = ft_sign(str[length]);
	length += ft_lsign(&str[length]);
	l_nbr = ft_isnum(&str[length]);
	i = 0;
	num = 0;
	while (i < l_nbr)
	{
		if (str[length + i] < '0' || str[length + i] > '9')
			return (0);
		num *= 10;
		num += str[length + i] - '0';
		i++;
	}
	return (sign * num);
}
