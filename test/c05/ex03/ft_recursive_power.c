/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motero <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 22:22:59 by motero            #+#    #+#             */
/*   Updated: 2022/02/10 23:36:07 by motero           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_power(int n, int pwr)
{	
	if (pwr == 0)
		return (1);
	return (n * ft_power(n, pwr - 1));
}

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	return (ft_power(nb, power));
}

/*int	main(void)
{
	printf("%d", ft_recursive_power(1, -2));
}*/
