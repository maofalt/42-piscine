/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motero <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 14:31:14 by motero            #+#    #+#             */
/*   Updated: 2022/02/14 14:39:51 by motero           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c,1);
}

int	ft_detect_a(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == 'a')
			return (1);
		i++;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		ft_putchar('a');
	}
	else if (ft_detect_a(argv[1]))
	{
		ft_putchar('a');
	}
	ft_putchar('\n');
}
