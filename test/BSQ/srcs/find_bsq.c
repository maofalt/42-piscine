/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_BSQ.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcalon <jcalon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 18:42:07 by motero            #+#    #+#             */
/*   Updated: 2022/02/22 01:25:49 by jcalon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	partial_s(int **b, int r, int c, int s)
{
	int	res;

	if ((c - s + 1) == 0)
	{
		if ((r - s + 1) == 0)
			return (b[r][c]);
		else
			return (b[r][c] - b[r - s][c]);
	}
	else if ((r - s + 1) == 0)
		return (b[r][c] - b[r][c - s]);
	else
	{
		res = b[r][c] - b[r - s][c] - b[r][c - s] + b[r - s][c - s];
		return (res);
	}
	return (-42);
}

int	possible(int col_max, int row_max)
{
	int	max;

	if (col_max >= row_max)
		max = row_max;
	else
		max = col_max;
	return (max);
}

void	bsq_coord(int *coord, int *row, int *col, int *size)
{
	coord[0] = *row;
	coord[1] = *col;
	coord[2] = *size;
	*size += 1;
	new_coord(row, col, size);
//	*row = *size - 1;
	//*col = *size - 1;
}

void	test_coord(int **p, int *rc, int rc_max[2], int *coord)
{
	int	size_max;
	int	size;
	int	res;

	size = 1;
	size_max = possible(rc_max[0], rc_max[1]);
	rc[0] = (size - 1);
	rc[1] = (size - 1);
	while (rc[0] < rc_max[0] && size <= size_max)
	{
		rc[1] = size - 1;
		while (rc[1] < rc_max[1] && size <= size_max)
		{
			res = partial_s(p, rc[0], rc[1], size);
			if (res <= 0)
				bsq_coord(coord, &rc[0], &rc[1], &size);
			else
				rc[1]++;
		}
		rc[0]++;
	}
}

int	*find_bbq(int **p, int row_max, int col_max)
{
	int	rc[2];
	int	rc_max[2];
	int	*coord;

	coord = malloc(sizeof(int) * 3);
	if (!coord)
		return (NULL);
	rc_max[0] = row_max;
	rc_max[1] = col_max;
	test_coord(p, rc, rc_max, coord);
	return (coord);
}
