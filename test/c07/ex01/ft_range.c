/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motero <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 12:28:33 by motero            #+#    #+#             */
/*   Updated: 2022/02/14 23:30:31 by motero           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	i;
	int	range;

	if (min >= max)
		return ('\0');
	tab = (int *)malloc(sizeof(int) *(max - min));
	if (!tab)
		return (0);
	i = 0;
	range = max - min;
	while (i < range)
	{
		tab[i] = min;
		i++;
		min ++;
	}
	return (tab);
}

/*int	main(void)
{
	int *range;


	range = ft_range(0, 5);
	printf("0, 1, 2, 3, 4 : %d, %d, %d, %d, %d\n", 
	range[0], range[1], range[2], range[3], range[4]);

	range = ft_range(3, 3);

	range = ft_range(-1, 1);
	printf("-1, 0 : %d, %d", range[0], range[1]);
}*/
