/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motero <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 13:29:23 by motero            #+#    #+#             */
/*   Updated: 2022/02/18 13:37:45 by motero           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_rev_print(char *str)
{
	int	size;
	int	i;
	char	tmp;

	size = 0;
	i = 0;
	while (str[size])
		size++;
	size -= 1;
	while (i < size/ 2)
	{
		tmp = str[i];
		str[i] = str[size -i];
		str[size - i] = tmp;
		i++;
	}
	return (str);
}

int main()
{
	char	str[15555]= "toto a la plage";
	
	printf("%s\n",ft_rev_print(str));
	return (0);
}
