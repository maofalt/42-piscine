/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   or_dic.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nigarcia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 13:56:39 by nigarcia          #+#    #+#             */
/*   Updated: 2022/02/19 22:23:57 by motero           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#define BUF_SIZE 100

int	file_len(char *file_path)
{
	char	buffer[BUF_SIZE + 1];
	int		fd;
	int		ret;
	int		size;

	size = 0;
	fd = open(file_path, O_RDONLY);
	if (fd == -1)
	{
		write(1, "Dict Error\n", 11);
		return (-1);
	}
	ret = read(fd, buffer, BUF_SIZE);
	while (ret != 0)
	{
		size += ret;
		buffer[ret] = '\0';
		ret = read(fd, buffer, BUF_SIZE);
	}
	if (close(fd) == -1)
	{
		write(1, "Dict Error\n", 11);
		return (-1);
	}
	return (size);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;

	i = 0;
	while (dest[i])
		i++;
	while (*src)
	{
		dest[i] = *src;
		i++;
		src++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*or_dic(char *file_path)
{
	int		fd;
	int		ret;
	char	buffer[BUF_SIZE + 1];
	char	*str_dic;

	str_dic = malloc(sizeof(char) * file_len(file_path));
	str_dic[0] = '\0';
	fd = open(file_path, O_RDONLY);
	if (fd == -1)
	{
		write(1, "Dict Error\n", 11);
		return (NULL);
	}
	ret = read(fd, buffer, BUF_SIZE);
	while (ret != 0)
	{
		buffer[ret] = '\0';
		ft_strcat(str_dic, buffer);
		ret = read(fd, buffer, BUF_SIZE);
	}
	if (close(fd) == -1)
	{
		write(1, "Dict Error\n", 11);
		return (NULL);
	}
	return (str_dic);
}
