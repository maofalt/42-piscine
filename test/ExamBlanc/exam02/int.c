/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   int.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motero <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 14:24:57 by motero            #+#    #+#             */
/*   Updated: 2022/02/18 14:39:39 by motero           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	checkdoubles(char *str, char c, int pos)
{
	int 	i;

	i = 0;
	while (i < pos)
	{
		if (str[i] == c)
		{
			return (0);
		}
		i++;
	}
	return (1);	
}

int	main(int ac, char **av)
{
	int	i;
	int	j;

	i = 0;
	if (ac == 3)
	{
		while (av[1][i])
		{
			j = 0;
			while (av[2][j])
			{
				if (av[1][i] == av[2][j] && checkdoubles(av[1],av[1][i], i) == 1)
				{
					write(1, &av[1][i],1);
					break;
				}
				j++;
			}
			i++;
		}	
	}
	write(1,"\n",1);
	return (0);
}
