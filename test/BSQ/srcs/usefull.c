/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bordel.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcalon <jcalon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 01:38:51 by jcalon            #+#    #+#             */
/*   Updated: 2022/02/22 02:08:58 by jcalon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	ft_lines(char **board)
{
	int	i;

	i = 0;
	while (board[i])
		i++;
	return (i);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	check_all(char *boardline, char **board)
{
	int	len;

	len = ft_strlen(board[0]);
	if (!check_char_first_line(board[0]))
		return (0);
	if (!check_num_first_line(board[0], boardline, len - 3))
		return (0);
	if (!check_inter(boardline, board[0][len - 2], board[0][len - 3], len))
		return (0);
	if (!check_line_len(board))
		return (0);
	return (1);
}
