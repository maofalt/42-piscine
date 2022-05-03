/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motero <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 12:43:10 by motero            #+#    #+#             */
/*   Updated: 2022/02/09 21:12:54 by motero           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

void	ft_nbr_basetwo(char *buffer, int dec_nb, char*base_to);
int		f_nblen(int dec_nb, char *base_to);

int	checkbase(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (base[i] == 0 || base[1] == 0)
		return (0);
	while (base[i])
	{
		if ((base[i] >= 9 && base[i] <= 13) || base[i] == 32
			|| base[i] == 43 || base[i] == 45)
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (i);
}

int	nb_base(char str, char *base)
{
	int	nb;

	nb = 0;
	while (base[nb])
	{
		if (str == base[nb])
			return (nb);
		nb++;
	}
	return (-1);
}

int	whitespaces(char *str, int *length_spaces)
{
	int	sign;
	int	i;

	i = 0;
	sign = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while ((str[i]) && (str[i] == '+' || str[i] == '-'))
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	*length_spaces = i;
	return (sign);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	sign;
	int	nb;
	int	nb_unit;
	int	base_size;

	i = 0;
	nb = 0;
	base_size = checkbase(base);
	if (base_size >= 2)
	{
		sign = whitespaces(str, &i);
		nb_unit = nb_base(str[i], base);
		while (nb_unit != -1)
		{
			nb = (nb * base_size) + nb_unit;
			i++;
			nb_unit = nb_base(str[i], base);
		}
		return (nb * sign);
	}
	return (0);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		dec_nb;
	char	*nb_new_base;
	char	*buffer;
	int		len;

	if (checkbase(base_from) == 0 || checkbase(base_to) == 0)
		return (0);
	dec_nb = ft_atoi_base(nbr, base_from);
	len = f_nblen(dec_nb, base_to);
	buffer = (char *)malloc(sizeof(char) * (len + 1));
	nb_new_base = buffer;
	if (!buffer)
		return (0);
	ft_nbr_basetwo(buffer, dec_nb, base_to);
	buffer[len] = '\0';
	return (nb_new_base);
}

/*int	main(void)
{
	printf("653:%s\n", ft_convert_base("653", "0123456789", 
	"0123456789"));
	printf("-2147483648%s\n", ft_convert_base("-80000000", 
	"0123456789abcdef","0123456789"));
}*/
