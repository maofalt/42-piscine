/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_valid_table.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motero <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 06:21:02 by motero            #+#    #+#             */
/*   Updated: 2022/02/20 12:27:39 by antlefeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

void free_double_ptr(char **strs) {
	int	i;

	i = 0;
	while (strs[i] != NULL)
	{
		free(strs[i]);
		i++;
	}
	free(strs);
}

char	**ft_split1(char *str)
{
	char	**keys;
	int		i;

	i = 0;
	if (count_lines(str) >= 32)
		keys = (char **)malloc(sizeof(char *) * (count_lines(str) + 1));
	else
	{
		write(1,"Dict Error\n",11);
		return (NULL);
	}
	if (!keys)
		return (NULL);
	while (*str && i < 32)
	{
		while (*str && check_line(*str))
			str++;
		if (*str)
		{
			keys[i] = ft_key(str);
			i++;
		}
		while (*str && !check_line(*str))
			str++;
	}
	keys[i] = NULL;
	return (keys);
}

int	check_valid_dict(char	*str)
{
	char	**keys;
	int		i;
	int		j;

	i = 0;
	j = 0;
	keys = ft_split1(str);
	if (keys == NULL)
		return (0);
	while (keys[i])
	{
		j = i + 1;
		while (keys[j])
		{
			if (ft_strcmp(keys[i], keys[j]) == 0)
			{
				write(1, "Dict Error\n", 11);
				free_double_ptr(keys);
				return (0);
			}
			j++;
		}
		i++;
	}
	free_double_ptr(keys);
	return (1);
}
