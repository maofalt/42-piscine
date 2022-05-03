/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab_main.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motero <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 19:22:32 by motero            #+#    #+#             */
/*   Updated: 2022/02/05 19:24:03 by motero           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  <stdio.h>

void    ft_sort_int_tab(int *tab, int size);

int     main(void)
{
        int     size;
        int     tabo[10] = {-5,-5,-71,-56,-99,0,0,-1,-8900,-56};
        int     i;

        size = 10;
        i = 0;
        while (i < size)
        {
                printf("%d", tabo[i]);
                printf(" | ");
                i++;
        }
        printf("\n");
        i = 0;
        ft_sort_int_tab(tabo, size);
        while (i < size)
        {
                printf("%d", tabo[i]);
                printf(" | ");
                i++;
        }
}
