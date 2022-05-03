/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_to_struc_two.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motero <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 21:50:39 by motero            #+#    #+#             */
/*   Updated: 2022/02/20 12:28:52 by antlefeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

int	check_line(char c)
{
	if (c == '\n')
		return (1);
	return (0);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
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

int	key_match(char	*str, char	**keys)
{
	int		i;
	char	*key;

	i = 0;
	key = ft_key(str);
	while (i < 32)
	{
		if (ft_strcmp(key, keys[i]) == 0)
		{
			free(key);
			return (i);
		}
		i++;
	}
	free(key);
	return (-1);
}

char	**key_index(char *str)
{
	char	**key_only;
	int		i;

	key_only = (char **)malloc(sizeof(char *) * 33);
	if (!key_only)
		return (NULL);
	i = 0;
	while (*str && i < 32)
	{
		while (*str && check_line(*str))
			str++;
		if (*str)
		{
			key_only[i] = ft_key(str);
			i++;
		}
		while (*str && !check_line(*str))
			str++;
	}
	key_only[i] = NULL;
	return (key_only);
}
