/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motero <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 11:06:26 by motero            #+#    #+#             */
/*   Updated: 2022/02/03 19:10:09 by motero           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print(int *table, int n)
{
	int	i;
	int	toggle;

	toggle = 1;
	i = 0;
	while (++i < n)
		if (table[i - 1] >= table[i])
			toggle = 0;
	if (toggle == 0)
		return ;
	i = -1;
	while (++i < n)
		ft_putchar(table[i] + 48);
	if (table[0] < (10 - n))
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_combn(int n)
{
	int	tab[10];
	int	i;

	i = -1;
	while (++i < n)
		tab[i] = i;
	while (tab[0] <= (10 - n))
	{
		ft_print(tab, n);
		tab[n - 1] = tab[n - 1] + 1;
		i = n;
		while (i && n > 1)
		{
			i--;
			if (tab[i] == 10)
			{
				tab[i - 1] = tab[i - 1] + 1;
				tab[i] = 0;
			}
		}
	}
}

/*int	main(void)
{
	int	n;

	n = 0;
	while (++n < 10)
	{
		ft_print_combn(n);
		ft_putchar('\n');
	}
}*/
