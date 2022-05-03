/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   partial_sums.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcalon <jcalon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 14:57:43 by motero            #+#    #+#             */
/*   Updated: 2022/02/22 02:02:37 by jcalon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	sum(char b, int **s, char obstacle, int *c)
{
	int	num;

	num = 0;
	if (b == obstacle)
		num = 1;
	if (c[1] == 0)
	{
		if (c[0] == 0)
		{
			if (num == 1)
				return (num);
			else
				return (0);
		}
		else
			return (num + s[c[0] - 1][c[1]]);
	}
	else if (c[0] == 0)
		return (num + s[c[0]][c[1] - 1]);
	else
	{
		num += s[c[0]][c[1] - 1] + s[c[0] - 1][c[1]] - s[c[0] - 1][c[1] - 1];
		return (num);
	}
	return (num);
}		

int	**partial_sums(char **board, char obstacle, int row_max, int col_max)
{
	int	**p_s;
	int	rc[2];

	p_s = (int **)malloc(sizeof(int *) * (row_max - 1));
	if (!p_s)
		return (NULL);
	rc[0] = 0;
	rc[1] = 0;
	while (rc[0] < row_max - 1)
	{
		p_s[rc[0]] = (int *)malloc(sizeof(int) * col_max);
		rc[1] = 0;
		while (rc[1] < col_max)
		{
			p_s[rc[0]][rc[1]] = sum(board[rc[0] + 1][rc[1]], p_s, obstacle, rc);
			rc[1]++;
		}
		rc[0]++;
	}
	return (p_s);
}
