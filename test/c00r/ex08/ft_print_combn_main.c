/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motero <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 11:06:26 by motero            #+#    #+#             */
/*   Updated: 2022/02/03 19:01:17 by motero           ###   ########.fr       */
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
	/*Toggle off the write on screen if the left figure is bigger than the right one, for each duplet  on the table. if Toggle is off, escape this function and return to ft_print-combn. Else --> */
	while (++i < n)
		if (table[i - 1] >= table[i])
			toggle = 0;
	if (toggle == 0)
		return;
	i = -1;
	/*Print every index of our table throug ft-putchar fonction in order to get our n size number. These two functions in combinations allow us  display only the unique combinations of numbers*/
	while (++i < n)
		ft_putchar(table[i] + 48);
	/*once all our n figure are printed, we will print , and backspace for all n-uplet of numbers printed except the when i < 10-2 condition is fulfilled. Under this condition we know we have arrived to the last printable number. */
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
	/*As long as we are not in the last printable  i array position, we print first and then we  update  the array positions*/
	while (tab[0] <= (10 - n))
	{
		/*we send to our ft_print function the n-uplet needed for the array  as well as the iniitilized,incremented or upated array*/
		ft_print(tab, n);
		/*Afteri printing  we increment the n-1 position of our array by 1, since implicitly in the next while function we incrementd it  at its maximum possible. This allows us to go to our next ten houndred our thousands, etc..*/
		tab[n - 1] = tab[n - 1] + 1;
		i = n;
		/*This loop allow to prevent any two digit value  to to be passed to print on the foresmost right i array position. Once a 10 is detected, we initialized. if we detect a 10 in the i psition, we intilize it at 0 and we incremented its left value by 1. */
		while (i && n > 1)
		{
			i--;
			if (tab[i] == 10 )
			{
				tab[i - 1] = tab[i - 1] + 1;
				tab[i] = 0;
			}
		}
	}
}

int	main(void)
{
	int	n;

	n = 0;
	while (++n < 10)
	{
		ft_print_combn(n);
		ft_putchar('\n');
	}
}
