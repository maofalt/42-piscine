/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_slit.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motero <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 15:21:58 by motero            #+#    #+#             */
/*   Updated: 2022/02/20 12:48:56 by antlefeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "ft_header.h"
#include <stdlib.h>
#include <stdio.h>

int	check_line(char c)
{
	if (c == '\n')
		return (1);
	return (0);
}

int	count_lines(char *str)
{
	int	i;
	int	line;

	line = 0;
	i = 0;
	while (str[i])
	{
		while (str[i] && check_line(str[i]))
			i++;
		if (str[i])
			line++;
		while (str[i] && !check_line(str[i]))
			i++;
	}
	return (line);
}

int	ft_len_line(char *str)
{
	int	i;

	i = 0;
	while (str[i] && !check_line(str[i]))
	{
		i++;
	}
	return (i);
}

char	*ft_line(char *str)
{
	int		len_line;
	int		i;
	char	*line;

	i = 0;
	len_line = ft_len_line(str);
	line = (char *)malloc(sizeof(char) * len_line + 1);
	if (!line)
		return (NULL);
	while (i < len_line)
	{
		line[i] = str[i];
		i++;
	}
	line[i] = '\0';
	return (line);
}

char	**ft_split(char *str)
{
	char	**lines;
	int		i;

	i = 0;
	lines = (char **)malloc(sizeof(char *) * count_lines(str) + 1);
	if (!lines)
		return (NULL);
	while (*str)
	{
		while (*str && check_line(*str))
			str++;
		if (*str)
		{
			lines[i] = ft_line(str);
			i++;
		}
		while (*str && !check_line(*str))
			str++;
	}
	lines[i] = '\0';
	return (lines);
}

int	main(void)
{
    char	*str = "0: zero\n\n\n1: one\n2: two\n3: three\n4: four\n5: five\n6: six\n7: seven\n8: eight\n9: nine\n10: ten\n11: eleven\n12: twelve\n13: thirteen\n14: fourteen\n15: fifteen\n16: sixteen\n17: seventeen\n18: eighteen\n19: nineteen\n20: twenty";
	int 	i;
	char	**tab;

	i = 0;
	tab = ft_split(str);
	while(i < 21)
	{
		printf("%s\n",tab[i]);
		i++;
	}
}
