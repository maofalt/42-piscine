/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motero <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 22:22:59 by motero            #+#    #+#             */
/*   Updated: 2022/02/10 23:33:03 by motero           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	result;

	i = 0;
	result = 1;
	if (power < 0)
		return (0);
	if (power == 1)
		return (1);
	while (i < power)
	{
		result *= nb;
		i++;
	}
	return (result);
}

/*int	main(void)
{
	printf("%d", ft_iterative_power(5, 4));
}*/
