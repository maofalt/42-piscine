/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchesnea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 21:47:39 by hchesnea          #+#    #+#             */
/*   Updated: 2022/02/11 21:49:54 by hchesnea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

#include <stdio.h>
/*Celui ci est juste pour les test*/

int test(int i, int to_see, int in[4][4]);
/* i la position dans le tableau exterieur, to_see la valeur de out[i]
et in[4][4] le tableau interieur actuellement en test*/
{
	int j;
	int see;
	int ref;

	
	ref = 0;
	see = 1;
	if( (i / 4) == 0 || (i / 4) == 1))
	{
		while (j <= 3)
		{
			if (in[j][1 % 4] > ref)
			{
				ref = in[j][1 % 4];
				see ++;
			}
			j++;
		}
	}
	else if( (i / 4) == 1)
	{
		j = 3;
		while (j >= 0)
		{
			if (in[j][1 % 4] > ref)
			{
				ref = in[j][1 % 4];
				see ++;
			}
			j--;
		}
	}
	else if( (i / 4) == 2)
	{
		j = 0;
		while (j <= 3)
		{
			if (in[1 % 4][j] > ref)
			{
				ref = in[1 % 4][j];
				see ++;
			}
			j++;
		}
	}
	else if( (i / 4) == 3)
	{
		j = 3;
		while (j >= 0)
		{
			if (in[1 % 4][j] > ref)
			{
				ref = in[1 % 4][j];
				see ++;
			}
			j--;
		}
	}
	if (to_see == see)
		return (1);
	else
		return(0);
}
/*J'ai fait un joli schema avec des couleurs pour expliquer la fonction
bien si besoin, mais en gros elle observe selon la position i dans le tableau 
exterieur combien de caisses sont visibles, si le nombre visible est le nombre 
a voir to_see la fonction renvoi 1, sinon elle renvoi 0 */

int main(int argc, char *argv[])
{
	int out[16];
	int	i;
	int j;
	
	i = 0;
	j = 0;
	
	while (j < 16)
	{
	out[j] = argv[1][i] - 48;
	j++;
	i = i + 2;
}
/*now tab[16] contient les 16 valeurs indiquee en argv*/
