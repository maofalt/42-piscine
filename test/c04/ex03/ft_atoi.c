/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motero <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 21:29:24 by motero            #+#    #+#             */
/*   Updated: 2022/02/09 20:08:12 by motero           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

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
	while (c[i] == 43 || c[i] == 45)
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

int	ft_sign(char *c)
{
	int	sign;
	int	i;

	sign = 1;
	i = 0;
	while (c[i] == 43 || c[i] == 45)
	{
		if (c[i] == 45)
			sign = -sign;
		else
			sign = sign;
		i++;
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
	sign = ft_sign(&str[length]);
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

/*int	main(void)
{
	printf("42:%d\n", ft_atoi("  \n  42t4457"));
	printf("-42:%d\n", ft_atoi(" --+-42sfs:f545"));
	printf("0:%d\n", ft_atoi("\0 1337"));
	printf("0:%d\n", ft_atoi("-0"));
	printf("0:%d\n", ft_atoi(" - 1 3 2 5 6 3 2 1 6 7"));
	printf("-1325632167:%d\n", ft_atoi("-1325632167"));
	printf("-100:%d\n", ft_atoi("-100"));
	printf("min:%d\n", ft_atoi("\t---+2147483648"));
	printf("max:%d\n", ft_atoi("\v2147483647"));
}*/
