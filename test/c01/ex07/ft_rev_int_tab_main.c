/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab_main.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motero <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 18:08:59 by motero            #+#    #+#             */
/*   Updated: 2022/02/05 19:51:28 by motero           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);

int	main(void)
{
	int     tab[19];
	int     size;
	int     i;
	
	size = 19;
	i = 0;
	while (i < size)
        {
                tab[i] = i;
                printf("%d ", tab[i]);
                i++;
        }
        printf("\n");
        ft_rev_int_tab(tab, size);
        i = 0;
        while (i < size)
        {
                printf("%d ",tab[i]);
                i++;
        }
}
