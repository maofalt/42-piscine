/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dynamic_free.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antlefeb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 11:48:40 by antlefeb          #+#    #+#             */
/*   Updated: 2022/02/20 12:05:32 by antlefeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_header.h"

void	dynamic_free(t_dict *dict, int nb_elem)
{
	int	i;

	i = 0;
	while (i < nb_elem)
	{
		free(dict[i].key);
		free(dict[i].value);
		i++;
	}
	free(dict);
}
