/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_col_row.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motero <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 21:45:00 by motero            #+#    #+#             */
/*   Updated: 2022/02/12 21:52:22 by motero           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush.h"

int	ft_check_col_row(int x, int y, int board[4][4], int nbr)
{
	int	i;

	(void)nbr;
	if (!board[x][y])
		return (1);
	i = x;
	while (i--)
		if (board[x][y] == board[i][y])
			return (0);
	i = x;		
	while (++i < 4)
		if (board[x][y] == board[i][y])
			return (0);		
	i = y;
	while (i--)
		if (board[x][y] == board[x][i])
			return (0);
	i = y;
	while (++i < 4)
		if (board[x][y] == board[x][i])
			return (0);
	return (1);
}
