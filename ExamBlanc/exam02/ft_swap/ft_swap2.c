/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motero <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 14:50:43 by motero            #+#    #+#             */
/*   Updated: 2022/02/15 14:51:57 by motero           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_swap(int a*, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
