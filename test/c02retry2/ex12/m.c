/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motero <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 16:04:33 by motero            #+#    #+#             */
/*   Updated: 2022/02/07 16:08:48 by motero           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
void    *ft_print_memory(void *addr, unsigned int size);

int   main(void)
{
        unsigned int    size;
        void    *addr="Bonjour les aminches    c est fout\ntout\nce qu on peut faire avec.";
       // unsigned long   l_addres;

        size = 20;
       // l_addres = (unsigned long)addr;
       // printf("%p\n",addr);
       // printf("%ld\n", l_addres);
        ft_print_memory(addr, size);
}
