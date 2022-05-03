/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motero <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 00:43:29 by motero            #+#    #+#             */
/*   Updated: 2022/02/16 00:45:24 by motero           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	f_nblen(int dec_nb, char *base_to)
{
	int				base_lenght;
	unsigned int	nb;
	int				len;

	len = 0;
	base_lenght = ft_strlen(base_to);
	if (dec_nb < 0)
	{
		nb = -dec_nb;
		len++;
	}
	else
		nb = dec_nb;
	while (nb >= (unsigned)base_lenght)
	{
		nb /= base_lenght;
		len++;
	}
	len++;
	return (len);
}

void	ft_nbr_basetwo(char *buffer, int dec_nb, char *base)
{
	int				size_base;
	int				len_nb;
	long int		nb;
	int				i;

	size_base = ft_strlen(base);
	len_nb = f_nblen(dec_nb, base);
	nb = dec_nb;
	i = 0;
	if (nb < 0)
	{
		buffer[0] = '-';
		nb *= -1;
		i = 1;
	}
	while (nb >= size_base)
	{
		buffer[len_nb - 1] = base[nb % size_base];
		nb = nb / size_base;
		len_nb--;
	}
	if (nb < size_base)
		buffer[i] = base[nb];
}
