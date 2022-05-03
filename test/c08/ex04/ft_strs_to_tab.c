/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motero <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 16:51:17 by motero            #+#    #+#             */
/*   Updated: 2022/02/17 18:06:09 by motero           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_copy(char *src)
{
	char	*copy;
	char	*buffer;
	int		i;

	i = 0;
	copy = (char *)malloc(sizeof(char) * ft_strlen(src) + 1);
	buffer = copy;
	if (!buffer)
		return (NULL);
	while (src[i])
	{
		buffer[i] = src[i];
		i++;
	}
	buffer[i] = 0;
	return (copy);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	struct s_stock_str	*tab;
	struct s_stock_str	*buffer;
	int					i;

	tab = malloc((ac + 1) * sizeof(struct s_stock_str));
	buffer = tab;
	if (!buffer)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		buffer[i].size = ft_strlen(av[i]);
		buffer[i].str = av[i];
		buffer[i].copy = ft_copy(av[i]);
		i++;
	}
	buffer[i].str = 0;
	buffer[i].copy = 0;
	return (tab);
}
