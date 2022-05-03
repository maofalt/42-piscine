/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swa.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motero <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 17:34:02 by motero            #+#    #+#             */
/*   Updated: 2022/02/16 17:35:19 by motero           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}