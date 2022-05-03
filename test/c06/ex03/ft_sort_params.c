/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motero <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 13:32:56 by motero            #+#    #+#             */
/*   Updated: 2022/02/10 18:31:18 by motero           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(char **a, char **b)
{
	char	*temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

void	ft_sort(char **para, int args)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	while (i < args)
	{
		j = i + 1;
		while (j < args)
		{
			if (ft_strcmp(para[i], para[j]) > 0)
				ft_swap(&para[i], &para[j]);
			j++;
		}
		i++;
	}	
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	ft_sort(argv, argc);
	i = 1;
	if (argc > 0)
	{
		while (i < argc)
		{
			j = 0;
			while (argv[i][j] != '\0')
			{
				write(1, &argv[i][j], 1);
				j++;
			}
			write(1, "\n", 1);
			i++;
		}
	}
	return (0);
}
