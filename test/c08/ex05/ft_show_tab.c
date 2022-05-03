/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motero <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 18:07:10 by motero            #+#    #+#             */
/*   Updated: 2022/02/17 19:15:24 by motero           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

void	ft_putchar(char c)
{
	write(1,&c,1);
}

void	ft_printstr(char *str)
{
		int	i;

		i = 0;
		while (str[i])
		{
			ft_putchar(str[i]);
			i++;
		}
		ft_putchar("\n");
}

void	ft_printnbr(int	nbr)
{
		unsigned int	temp;

		if (nbr < 0)
		{
			ft_putchar('-');
			temp = -nbr;

		}
		else
			temp = nbr;
		if (temp > 9)
		{
				ft_printnbr(temp / 10);
				temp %=10;
		}
		ft_putchar('0' + temp);
}


void	ft_show_tab(struct	s_stock_str *par)
{
	int	i;

	i = 0;

	while (par[i].str)
	{
		ft_printstr(par[i].str);
		ft_printnbr(par[i].nbr);
		ft_putchar("\n");
		ft_printstr(par[i].copy);
		i++;
	}
}	
