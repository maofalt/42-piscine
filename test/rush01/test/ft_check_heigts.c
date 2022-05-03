/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_heigts.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motero <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 22:54:19 by motero            #+#    #+#             */
/*   Updated: 2022/02/13 00:02:41 by motero           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush.h"
#include <stdio.h>

int	ft_checkup(int x, int board[4][4], int constr[16])
{
	int	pov;
	int	maxheight;
	int	i;

	i = 0;
	maxheight = board[x][0];
	pov = 1;
	while (i < 3)
	{
		
		printf("maxheight %d \n", maxheight);
		if (board[x][i + 1] - maxheight > 0)
		{
			maxheight = board[x][i + 1];
			pov++;
		}
		i++;
	}
	printf("Pov at %d\n", pov);
	printf("Constraint at %d\n\n", constr[x]);
	if (pov == constr[x])
		return (1);
	return (0);
}

int	ft_checkdown(int x, int board[4][4], int constr[16])
{
	int	pov;
	int	maxheight;
	int	i;

	i = 0;
	maxheight = board[x][3];
	pov = 1;
	while (i < 3)
	{
		if (board[x][2 - i] - maxheight > 0)
		{
			maxheight = board[x][2 - i];
			pov++;
		}
		i++;
	}
	if (pov == constr[4 + x])
		return (1);
	return (0);
}

int	ft_checkleft(int y, int board[4][4], int constr[16])
{
	int	pov;
	int	maxheight;
	int	i;

	i = 0;
	maxheight = board[0][y];
	pov = 1;
	while (i < 3)
	{
		if (board[i + 1][y] - maxheight > 0)
		{
			maxheight = board[y + 1][y];
			pov++;
		}
		i++;
	}
	printf("Y at %d\n", y);
	printf("Pov at %d\n", pov);
	printf("Constraint at %d\n\n", constr[8 + y]);
	if (pov == constr[8 + y])
		return (1);
	return (0);
}

int	ft_checkright(int y, int board[4][4], int constr[16])
{
	int	pov;
	int	maxheight;
	int	i;

	i = 0;
	maxheight = board[3][y];
	pov = 1;
	while (i < 3)
	{
		if (board[2 - i][y] - maxheight > 0)
		{
			maxheight = board[2 - i][y];
			pov++;
		}
		i++;
	}
	printf("Y at %d\n", y);
	printf("Pov at %d\n", pov);
	printf("Constraint at %d\n\n", constr[12 + y]);
	if (pov == constr[12 + y])
		return (1);
	return (0);
}
