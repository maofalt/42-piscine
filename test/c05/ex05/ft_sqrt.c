/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motero <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 22:47:09 by motero            #+#    #+#             */
/*   Updated: 2022/02/12 00:21:35 by motero           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	sq;

	sq = 1;
	if (nb > 0)
	{
		while (sq * sq <= nb)
		{
			if (sq * sq == nb)
				return (sq);
			else if (nb >= 46341)
				return (0);
			sq++;
		}
	}
	return (0);
}

/*int	main(void)
{
	int	nb;

	nb = 15;
	printf("Nbr | %d \n Sqr | %d\n", nb, ft_sqrt(nb));
}*/
