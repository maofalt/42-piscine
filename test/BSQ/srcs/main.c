/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcalon <jcalon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 00:44:32 by jcalon            #+#    #+#             */
/*   Updated: 2022/02/22 02:34:08 by motero           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	map_error(char **board)
{
	free(board);
	ft_putstr("map error\n");
}

void	solve_it(char **board)
{
	int	*coord;
	int	**partials;
	int	col;
	int	row;

	row = ft_lines(board);
	col = ft_strlen(board[1]);
	partials = partial_sums(board, board[0][ft_strlen(board[0]) - 2], row, col);
	coord = find_bbq(partials, row - 1, col);
	fill_board(coord, board);
	print_board(board);
	i_want_to_break_free(partials, col);
	xavier_niel(board);
	free(coord);
}

int	stdin_case(void)
{
	char	**board;

	board = parse_strange_board();
	if (!board)
		map_error(board);
	else
		solve_it(board);
	return (0);
}

int	main(int ac, char **av)
{
	char	**board;
	int		i;

	i = 1;
	if (ac == 1)
		stdin_case();
	else
	{
		while (i < ac)
		{
			board = parse_board(av[i]);
			if (!board)
				map_error(board);
			else
				solve_it(board);
			if (i < ac - 1)
				write(1, "\n", 1);
			i++;
		}
	}
	return (0);
}
