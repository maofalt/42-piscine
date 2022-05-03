/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solv_sky.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motero <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 13:57:42 by motero            #+#    #+#             */
/*   Updated: 2022/02/13 14:06:49 by motero           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush.h"
#include <stdio.h>

int	ft_solv_sky(int row, int col, int *cstr, int board[4][4])
{
	int i;
	int j;
	
	(void)row;
	(void)col;
	while (ft_build_table(0, 0, board, cstr) == 0 )
	{
		ft_print_table(board);
		if (ft_build_table(0, 0, board, cstr))
				return (1);
		else
		{
			i = 0;
			while ( i < 4)
			{
				j = 0;
				while (j < 4)
				{
					board[i][j] = 0;
					j++;
				}
				i++;
			}
		}
	}
	return (0);
}
