/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoc.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motero <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 21:29:24 by motero            #+#    #+#             */
/*   Updated: 2022/02/20 02:06:16 by motero           ###   ########.fr       */
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
		else
			sign = sign;
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

int	len(long nb)
{
	int	len;

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
	str[i--] = '\0';
	if (n == 0)
	{
		str[0] = 48;
		return (str);
	}
	else if (n < 0)
	{
		str[0] = '-';
		n *= -1;
	}
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
		write(1, "Error\n", 6);
		return ((char *)malloc(sizeof(char)));
	}
	str_nb = ft_itoa(nb);
	return (str_nb);
}	

/*int	main(void)
{
	printf("%d:%d\n", atoi("  \n  42t4457"), ft_atoi("  \n  42t4457"));
	printf("%d:%d\n", atoi(" +42sfs:f545"), ft_atoi(" +42sfs:f545"));
	printf("%d:%d\n", atoi("\0 1337"), ft_atoi("\0 1337"));
	printf("%d:%d\n", atoi("1245"), ft_atoi("1245"));
	printf("%d:%d\n", atoi(" - 1 3 2 5 6 3 2 1 6 7"), ft_atoi(" - 1 3 2 5 6 3 2 1 6 7"));
	printf("%d:%d\n", atoi("-1325632167"), ft_atoi("-1325632167"));
	printf("%d:%d\n", atoi("-100"), ft_atoi("-100"));
	printf("%d:%d\n", atoi("\t-2147483648"), ft_atoi("\t-2147483648"));
	printf("%d:%d\n", atoi("\v2147483647"), ft_atoi("\v2147483647"));
}*/

int	main(int ac, char **av)
{
	(void)ac;
	printf("%s",ft_atoc(av[1]));
}
