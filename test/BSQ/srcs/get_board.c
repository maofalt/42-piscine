/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_board.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcalon <jcalon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 15:36:09 by jcalon            #+#    #+#             */
/*   Updated: 2022/02/22 02:12:57 by jcalon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	buff_len(char *pathtoboard)
{
	int		fd;
	int		count;
	int		ret;
	char	*buffer;

	fd = open(pathtoboard, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(sizeof(char *) * BUFF_SIZE);
	if (!(buffer))
		return (0);
	ret = read(fd, buffer, BUFF_SIZE);
	count = ret;
	while (ret != 0)
	{
		ret = read(fd, buffer, BUFF_SIZE);
		count = count + ret;
		buffer[ret] = '\0';
	}
	free(buffer);
	if (close(fd) == -1)
		return (0);
	return (count);
}

char	*fill_good(int buffsize, char *pathtoboard)
{
	int		fd;
	char	*buffer;

	fd = open(pathtoboard, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(sizeof(char *) * (buffsize + 1));
	if (!(buffer))
		return (0);
	read(fd, buffer, buffsize);
	buffer[buffsize] = '\0';
	if (close(fd) == -1)
		return (0);
	return (buffer);
}

char	**parse_board(char *pathtoboard)
{
	char	*boardline;
	int		fd;
	char	**theboard;
	int		len;

	fd = open(pathtoboard, O_RDONLY);
	if (fd == -1)
		return (NULL);
	len = buff_len(pathtoboard);
	boardline = fill_good(len, pathtoboard);
	if (close(fd) == -1 || boardline[0] == 0)
	{
		free(boardline);
		return (NULL);
	}
	theboard = ft_split(boardline, "\n");
	if (!check_all(boardline, theboard))
	{
		free(boardline);
		return (NULL);
	}
	free(boardline);
	return (theboard);
}

char	**parse_strange_board(void)
{
	char	*boardline;
	char	**theboard;

	boardline = fill_strange();
	if (boardline[0] == 0)
	{
		free(boardline);
		return (NULL);
	}
	theboard = ft_split(boardline, "\n");
	if (!check_all(boardline, theboard))
	{
		free(boardline);
		return (NULL);
	}
	free(boardline);
	return (theboard);
}

char	*fill_strange(void)
{
	int		count;
	char	buffer[BUFF_SIZE];
	char	bb_buff;
	char	*boardline;

	count = 0;
	while (read(0, &bb_buff, 1))
	{
		buffer[count] = bb_buff;
		count++;
	}
	buffer[count] = '\0';
	boardline = malloc(sizeof(char) * count + 1);
	if (!boardline)
		return (NULL);
	count = 0;
	while (buffer[count] != '\0')
	{
		boardline[count] = buffer[count];
		count++;
	}
	boardline[count] = '\0';
	return (boardline);
}
