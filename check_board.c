/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_board.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcalon <jcalon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 16:19:02 by jcalon            #+#    #+#             */
/*   Updated: 2022/02/22 02:07:59 by jcalon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

int	check_doubles(char *threechar, int i)
{
	int	j;

	j = 0;
	while (threechar[i])
	{
		j = i + 1;
		while (threechar[j])
		{
			if (threechar[i] == threechar[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	check_char_first_line(char *str)
{
	int	i;
	int	j;

	i = ft_strlen(str) - 1;
	j = 0;
	if (!(str[i] >= 32 && str[i] != 127))
		return (0);
	while ((str[i] >= 32 && str[i] != 127) && j < 3)
	{
		j++;
		i--;
	}
	if (j != 3)
		return (0);
	if (!check_doubles(str, i))
		return (0);
	while (i >= 0 && str[i] >= 32 && str[i] != 127)
		i--;
	if (i != -1)
		return (0);
	return (1);
}

int	check_num_first_line(char *firstline, char *boardline, int i)
{
	int 	result;
	int		count;
	int j;

	result = 0;
	count = -1;
	j = 0;
	while (firstline[j] >= '0' && firstline[j] <= '9' && i < j)
	{
		result *= 10;
		result += firstline[j] - 48;
		j++;
	}
	while (*boardline)
	{
		if (*boardline == '\n')
			count++;
		boardline++;
	}
	if (result != count)
		return (0);
	return (result);
}

int	check_inter(char *boardline, char a, char b, int i)
{
	while (boardline[i] != '\0')
	{
		if (boardline[i] != a && boardline[i] != b
			&& boardline[i] != '\n')
				return (0);
		i++;
	}
	return (1);
}

int	check_line_len(char **theboard)
{
	int i;
	int	reflen;

	i = 2;
	reflen = ft_strlen(theboard[1]);
	while (theboard[i] && reflen == ft_strlen(theboard[i]))
		i++;
	if (theboard[i])
		return (0);
	return (1);
}
