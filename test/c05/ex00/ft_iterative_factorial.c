/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motero <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 21:34:19 by motero            #+#    #+#             */
/*   Updated: 2022/02/10 19:44:01 by motero           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int				i;
	unsigned int	result;

	result = 1;
	i = 1;
	if (nb >= 0)
	{
		while (i <= nb)
		{
			result *= i;
			i++;
		}
		return (result);
	}
	return (0);
}

/*int	main(void)
{
	int	num;
	int	fact;

	num = 4;
	fact = ft_iterative_factorial(num);
	printf("%d", fact);
	return (0);
}*/
