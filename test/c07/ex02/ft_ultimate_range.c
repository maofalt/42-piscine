/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motero <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 12:28:33 by motero            #+#    #+#             */
/*   Updated: 2022/02/15 21:32:10 by motero           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	diff;

	diff = max - min;
	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	*range = (int *)malloc(sizeof(int) *(diff));
	if (!range)
	{
		*range = 0;
		return (-1);
	}
	i = 0;
	while (i < diff)
	{
		(*range)[i] = min;
		i++;
		min ++;
	}
	return (diff);
}

/*int	main(void)
{
	int *range;

	printf("5:%d\n", ft_ultimate_range(&range, 0, 5));
	printf("0, 1, 2, 3, 4 : %d, %d, %d, %d, %d\n", range[0], range[1],
		       	range[2], range[3], range[4]);

	printf("0:%d\n", ft_ultimate_range(&range, 3, 3));

	printf("2:%d\n", ft_ultimate_range(&range, -1, 1));
	printf("-1, 0 : %d, %d", range[0], range[1]);
}*/
