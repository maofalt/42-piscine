/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative_main.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motero <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 17:50:18 by motero            #+#    #+#             */
/*   Updated: 2022/02/02 18:00:45 by motero           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_negative(int n);

int	main(void)
{
	int	n;

	n = 0;
	ft_is_negative(n);
	n = -10;
	ft_is_negative(n);
	n = 2;
	ft_is_negative(n);
}
