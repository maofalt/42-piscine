/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motero <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 13:12:56 by motero            #+#    #+#             */
/*   Updated: 2022/02/10 13:31:08 by motero           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_name(char *word)
{
	int	i;

	i = 0;
	while (word[i] != 0)
	{
		ft_putchar(word[i]);
		i++;
	}
	ft_putchar('\n');
}

int	main(int argc, char **argv)
{
	(void)argc;
	if (argc > 0)
		print_name(argv[0]);
	return (0);
}
