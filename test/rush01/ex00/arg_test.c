/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arg_test.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchesnea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 21:44:26 by hchesnea          #+#    #+#             */
/*   Updated: 2022/02/12 21:44:28 by hchesnea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush.h"

int	arg_test(int *ext)
{
	int	i;

	i = 0;
	while (i < 16)
	{
		if (!(1 <= ext[i] && ext[i] <= 4))
			return (1);
		else if ((0 <= i && i <= 3) || (8 <= i && i <= 11))
		{
			if (3 >= (ext[i] + ext [i + 4]) || (ext[i] + ext [i + 4]) >= 5)
				return (1);
		}
		i++;
	}
	return (0);
}
/*Verify if the tab is valid, then plausible*/
