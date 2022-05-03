/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cardin_conv2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nigarcia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 21:46:33 by nigarcia          #+#    #+#             */
/*   Updated: 2022/02/20 21:54:35 by nigarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

int	ft_strlen(char *str);

char	*ft_strndup(char *src, int n)
{
	char	*copy;
	int		i;

	copy = malloc(sizeof(*copy) * (MIN(ft_strlen(src), n) + 1));
	i = 0;
	while (src[i] && i < n)
	{
		copy[i] = src[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

char	*get_value_by_key(char *key, t_dict *dict, int nb_elem)
{
	int	i;

	i = 0;
	while (i < nb_elem)
	{
		if (ft_strcmp(dict[i].key, key) == 0)
		{
			return (dict[i].value);
		}
		i++;
	}
	return (NULL);
}

char	*get_value_by_size(int size, t_dict *dict, int nb_elem)
{
	int	i;

	i = 0;
	while (i < nb_elem)
	{
		if (dict[i].size == size)
		{
			return (dict[i].value);
		}
		i++;
	}
	return (NULL);
}

int	deal_with_zeros(char *nbr, int n, t_dict *dict, int nb_elem)
{
	int	i;

	if (n > 2)
	{
		if (n % 3 == 1)
		{
			ft_putstr(get_value_by_size(n, dict, nb_elem));
		}
		if (n % 3 == 2)
		{
			ft_putstr(get_value_by_size(n - 1, dict, nb_elem));
		}
	}
	i = 0;
	while (nbr[i] == '0')
		i++;
	if (nbr[i] != '\0' && n % 3 == 1)
	{
		ft_putstr(" ");
	}
	return (i);
}
