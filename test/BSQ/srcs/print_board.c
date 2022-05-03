/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_board.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcalon <jcalon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 23:52:30 by jcalon            #+#    #+#             */
/*   Updated: 2022/02/22 02:16:03 by jcalon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	print_board(char **board)
{
	int	i;

	i = 0;
	while (board[i])
	{
		write(1, board[i], ft_strlen(board[i]));
		write(1, "\n", 1);
		i++;
	}
}

void	fill_board(int *coord, char **board)
{
	char	full;
	int		i;
	int		j;

	full = board[0][ft_strlen(board[0]) - 1];
	i = 2 + coord[0] - coord[2];
	while (i <= coord[0] + 1)
	{
		j = 1 + coord[1] - coord[2];
		while (j <= coord[1])
		{
			board[i][j] = full;
			j++;
		}
		i++;
	}
}
