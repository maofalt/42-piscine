/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motero <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 22:47:09 by motero            #+#    #+#             */
/*   Updated: 2022/02/14 22:57:23 by motero           ###   ########.fr       */
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
			else if (sq >= 46341)
				return (0);
			sq++;
		}
	}
	return (0);
}

/*int	main(void)
{
	printf("10:%d\n", ft_sqrt(100));
	printf("6:%d\n", ft_sqrt(36));
	printf("0:%d\n", ft_sqrt(37));
	printf("100:%d\n", ft_sqrt(10000));
	printf("0:%d\n", ft_sqrt(10001));
	printf("46340:%d\n", ft_sqrt(2147395600));
	printf("15726:%d\n", ft_sqrt(247307076));
	printf("10928:%d\n", ft_sqrt(119421184));
	printf("13972:%d\n", ft_sqrt(195216784));
	printf("29398:%d\n", ft_sqrt(864242404));
	printf("9456:%d\n", ft_sqrt(91126116));
}*/
