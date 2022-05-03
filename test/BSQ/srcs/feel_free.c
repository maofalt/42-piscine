/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   feel_free.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcalon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 18:22:08 by jcalon            #+#    #+#             */
/*   Updated: 2022/02/23 18:22:10 by jcalon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	xavier_niel(char **board)
{
	int	i;

	i = 0;
	while (board[i])
	{
		free(board[i]);
		i++;
	}
	free(board);
}

void	i_want_to_break_free(int **board, int col)
{
	int	i;

	i = 0;
	while (i < col)
	{
		free(board[i]);
		i++;
	}
	free(board);
}
