/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solv_sky.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motero <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 18:05:27 by motero            #+#    #+#             */
/*   Updated: 2022/02/12 19:11:22 by motero           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush.h"
#include <stdio.h>

int	ft_build_table(int index, int nbr, int board[4][4], int *cstr)
{	
	while (index >= 0)
	{
		if (nbr == 5)
		{
			board[index % 4][index / 4] = 0;
			nbr = board[((index - 1) % 4)][(index - 1) / 4] + 1;
			return (ft_build_table(index - 1, nbr, board, cstr));
		}
		if (ft_check_col_row(index % 4, index / 4, board, nbr))
		{
			board[index % 4][index / 4] = nbr;
			if (index == 15)
			{
				if (ft_valid_table(board, cstr) == 0)
				{
					//ft_print_table(board);
					//printf("\n");
					board[index % 4][index / 4] = 0;
					nbr = board[((index -1) % 4)][(index - 1)/ 4] + 1;
					//ft_print_table(board);
					//printf("\n");
					
					return (ft_build_table(index - 1, nbr, board, cstr));
				}
				else
				{
					//ft_print_table(board);
					return (1);
				}
			}
			else 
				return (ft_build_table(index + 1, 1, board, cstr));
		}
		//printf("X %d|Y  %d| index %d|nbr %d \n", index % 4, index / 4, index,  nbr);
		nbr++;
	}
	ft_print_table(board);
	return (0);	
}
