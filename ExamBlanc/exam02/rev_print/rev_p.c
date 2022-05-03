/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_p.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motero <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 14:52:44 by motero            #+#    #+#             */
/*   Updated: 2022/02/15 15:34:49 by motero           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_rev_print(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	while (i-- > 0)
	{
		write(1, &str[i], 1);
	}
	write(1, "\n", 1);
	return (str);
}

int	main(int argc, char **argv)
{
	(void)argc;
	ft_rev_print(argv[1]);
}
