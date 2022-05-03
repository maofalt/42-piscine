/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motero <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 23:14:40 by motero            #+#    #+#             */
/*   Updated: 2022/02/03 01:09:44 by motero           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	unsigned int	temp;

	if (nb < 0)
	{
		ft_putchar('-');
		temp = -nb;
	}
	else
		temp = nb;
	if (temp > 9)
	{
		ft_putnbr(temp / 10);
		temp %= 10;
	}
	ft_putchar('0' + temp);
}
