/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motero <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 16:39:59 by motero            #+#    #+#             */
/*   Updated: 2022/02/14 18:23:22 by motero           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	check_pos(int c, char *b)
{
	int	i;

	i = 0;
	while (i < c)
	{
		if (b[i] == b[c] || b[i] == b[c] + c - i || b[i] == b[c] - c + i)
		{
			return (1);
		}
		i++;
	}
	return (0);
}

void	backtracking_queen(int c, char *board, int *sol)
{
	int	r;

	r = '0';
	while (r <= '9')
	{
		board[c] = r;
		if (!check_pos(c, board))
		{
			if (c == 9)
			{
				write(1, board, 11);
				*sol = *sol + 1;
			}
			else
			{
				backtracking_queen(c + 1, board, sol);
			}
		}
		r++;
	}
}

int	ft_ten_queens_puzzle(void)
{
	char	board[11];
	int		solutions;

	board[10] = '\n';
	solutions = 0;
	backtracking_queen(0, board, &solutions);
	return (solutions);
}
