/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft_main.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motero <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 01:12:28 by motero            #+#    #+#             */
/*   Updated: 2022/02/04 01:47:32 by motero           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_ft(int *********nbr);

int	main(void)
{
	int	*********p_nbr9;
	int	********p_nbr8;
	int	*******p_nbr7;
	int	******p_nbr6;
	int	*****p_nbr5;
	int	****p_nbr4;
	int	***p_nbr3;
	int	**p_nbr2;
	int	*p_nbr;
	int	nbr;

	nbr = 0;
	printf("%d\n", nbr);
	p_nbr = &nbr;
	p_nbr2 = &p_nbr;
	p_nbr3 = &p_nbr2;
	p_nbr4 = &p_nbr3;
	p_nbr5 = &p_nbr4;
	p_nbr6 = &p_nbr5;
	p_nbr7 = &p_nbr6;
	p_nbr8 = &p_nbr7;
	p_nbr9 = &p_nbr8;
	ft_ultimate_ft(p_nbr9);
	printf("%d\n", nbr);
}
