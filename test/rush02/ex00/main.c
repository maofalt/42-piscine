/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motero <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 11:56:41 by motero            #+#    #+#             */
/*   Updated: 2022/02/20 12:22:51 by antlefeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

int	main(int ac, char **ag)
{
	if (ac == 2)
	{
		basic_cardinal(ag[1], "numbers.dict");
	}
	else if (ac == 3)
	{
		basic_cardinal(ag[1], ag[2]);
	}
	else
		write(1, "Unexpected argumented!", 22);
}
