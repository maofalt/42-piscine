/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_valid_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motero <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 18:26:07 by motero            #+#    #+#             */
/*   Updated: 2022/02/12 21:40:42 by motero           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush.h"
#include <stdio.h>

int	ft_valid_place(int row, int col, int board[4][4])
{
//	printf("Checkup | %d\n", ft_checkup(row, board, cstr));
//	printf("Checkdown | %d\n", ft_checkdown(row, board, cstr));
//	printf("Checkleft | %d\n", ft_checkleft(col, board, cstr));
//	printf("Checkright | %d\n", ft_checkright(col, board, cstr));
	//printf("Check doubles | %d\n", ft_check_col_row(row, col, board));
	return (ft_check_col_row(row, col, board));
	
/*	return (ft_checkup(row, board, cstr) &&
	ft_checkdown(row, board, cstr) &&
	ft_checkleft(col, board, cstr) &&
	ft_checkright(col, board, cstr) &&
	ft_check_col_row(row, col, board));*/
}
