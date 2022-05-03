/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motero <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 01:12:28 by motero            #+#    #+#             */
/*   Updated: 2022/02/04 12:47:50 by motero           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b);

int	main(void)
{
	int	a;
	int	b;
	int	add_a;
	int	add_b;

	a = 0;
	b = 10;
	add_a = a;
	add_b = b;
	printf("%d --> %d\n", a, add_a);
	printf("%d --> %d\n", b, add_b);
	ft_swap(&a, &b);
	printf("%d --> %d\n", a, add_a);
	printf("%d --> %d\n", b, add_b);
}
