/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motero <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 13:01:01 by motero            #+#    #+#             */
/*   Updated: 2022/02/04 13:48:21 by motero           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int	main(void)
{
	int	a;
	int	b;
	int	div;
	int	mod;

	a = 12;
	b = 2;
	ft_div_mod(a, b, &div, &mod);
	printf("div --> %d\n", div);
	printf("mod --> %d", mod);
}
