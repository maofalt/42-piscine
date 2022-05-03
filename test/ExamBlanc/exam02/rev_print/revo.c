/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   revo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motero <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 17:35:43 by motero            #+#    #+#             */
/*   Updated: 2022/02/16 17:53:45 by motero           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_rev_print(char *str)
{
	int	i;

	i = 0;
	if (!str)
	{
		write (1,"\n",1);
		return (0);
	}
	while (str[i])
		i++;
	while (--i >= 0)
		write(1, &str[i],1);
	write(1,"\n",1);
	return (str);
}

int	main(int argc, char **argv)
{
	(void)argc;
	ft_rev_print(argv[1]);
}
