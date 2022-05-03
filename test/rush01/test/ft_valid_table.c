/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_valid_table.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motero <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 14:07:05 by motero            #+#    #+#             */
/*   Updated: 2022/02/13 14:15:18 by motero           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush.h"
#include <stdio.h>


int	ft_valid_table(int board[4][4], int * cstr)
{	
	int	row;
	int	col;

	row = 0;
	col = 0;
	while (row < 4)
	{
		if ((ft_checkleft(row, board, cstr) &&
		ft_checkright(row, board, cstr)) == 0)
			return (0);
		row++;
	}
	while (col < 4)
	{
		if ((ft_checkup(col, board, cstr) &&
		ft_checkdown(col, board, cstr)) == 0)
			return (0);
		col++;
	}
	return (1);
}
