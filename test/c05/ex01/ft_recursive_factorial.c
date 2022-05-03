/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motero <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 19:45:37 by motero            #+#    #+#             */
/*   Updated: 2022/02/14 21:42:07 by motero           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	int	fact;
	
   fact = 1;
	if (nb > 1)
	{
		fac *= nb * ft_recursive_factorial(nb - 1);
		nb -= -1;
	}

	if (nb < 0)
			return (0);
	return (fact);
}

int	main(void)
{
	printf("%d", ft_recursive_factorial(5));
}
