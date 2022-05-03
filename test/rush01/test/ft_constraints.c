/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_constraints.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motero <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 15:56:40 by motero            #+#    #+#             */
/*   Updated: 2022/02/12 18:25:13 by motero           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush.h"
#include <stdio.h>
#include <stdlib.h>

int	*ft_constraints(char *argv)
{
	int	i;
	int	*tab;

	tab = (int *)malloc(sizeof(int) * 16);
//		return (NULL);
	i = 0;
	while (i < 15)
	{
		tab[i] = argv[i * 2] - '0';
		i++;
	}
	return (tab);
}
