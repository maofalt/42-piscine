/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motero <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 18:09:25 by motero            #+#    #+#             */
/*   Updated: 2022/02/16 18:17:06 by motero           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strrev(char *str)
{
	int	i;
	char	tmp;
	int	size;
	i = 0;
	size = 0;
	while (str[size])
		size++;
	size -= 1;
	while (i <= (size / 2))
	{
		tmp = str[i];
		str[i] = str[size - i];
		str[size - i] = tmp;
		i++;
	}
	return (str);
}

int	main(int argc, char **argv)
{
	(void)argc;
	printf("%s",ft_strrev(argv[1]));

}
