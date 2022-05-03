/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoctwo.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motero <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 02:21:24 by motero            #+#    #+#             */
/*   Updated: 2022/02/20 02:25:48 by motero           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

int	len(long nb)
{
	int	len;

	if(nb == 0)
		return (1);
	len = 0;
	if (nb < 0)
	{
		nb *= -1;
		len++;
	}
	while (nb > 0)
	{
		nb /= 10;
		len++;
	}
	return (len);
}

int	ft_minus(char *str, long n)
{
	int	sign;

	sign = 1;
	if (n < 0)
	{
		str[0] = '-';
		sign *= -1;
	}
	return (sign);
}

char	*ft_itoa(int nb)
{
	char	*str;
	long	n;
	int		i;

	n = nb;
	i = len(n);
	str = (char *)malloc(sizeof(char) * i + 1);
	if (!str)
		return (NULL);

	if (n == 0)
	{
		str[0] = 48;
		str[1] = '\0';
		return (str);
	}
	str[i--] = '\0';
	n = ft_minus(str, n) * n;
	while (n > 0)
	{
		str[i] = 48 + (n % 10);
		n /= 10;
		i--;
	}
	return (str);
}

char	*ft_atoc(char *str)
{
	int		nb;
	char	*str_nb;

	nb = ft_atoi(str);
	if (nb < 0)
	{
		return ("42");
	}
	str_nb = ft_itoa(nb);
	return (str_nb);
}
/*
int	main(int ac, char **av)
{
	(void)ac;
	printf("%s", ft_atoc(av[1]));
}
*/
