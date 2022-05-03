/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod_main.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motero <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 13:50:11 by motero            #+#    #+#             */
/*   Updated: 2022/02/04 14:24:10 by motero           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

int	main(void)
{
	int	a;
	int	b;

	a = 12;
	b = 2;
	printf("a --> %d\n", a);
	printf("b --> %d\n", b);
	ft_ultimate_div_mod(&a, &b);
	printf("div --> %d\n", a);
	printf("mod --> %d", b);
}
