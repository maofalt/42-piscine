/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motero <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 15:19:26 by motero            #+#    #+#             */
/*   Updated: 2022/02/12 21:34:00 by motero           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_rush.h"
#include <stdio.h>

void	ft_error(void)
{
	ft_putstr("Error\n");
}

int	main(int argc, char **argv)
{
	int	*constr;
	int	board[4][4];
	int	i;
	int j;
	
	i = 0;
	j = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			board[i][j] = 0;
			j++;
		}
		i++;
	}
	i = 0;
	j = 0;
	if (argc != 2)
	{
		//printf("Test\n");
		ft_error();
	}
	else if ((constr = ft_constraints(argv[1])))
	{
		if (ft_build_table(0, 1, board, constr))
		{
			ft_print_table(board);
		}	
	}
	else
		ft_error();
	return (0);
}
