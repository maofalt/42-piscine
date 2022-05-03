/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motero <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 15:52:48 by motero            #+#    #+#             */
/*   Updated: 2022/02/15 16:36:44 by motero           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	*ft_strrev(char *str)
{
	char	temp;
	int	size;
	int	i;
	
	i = 0;
	size = 0;
	while (str[size])
			size++;
	size -= 1;
	while (i < (size /2))
	{
		temp = str[i];
		str[i] = str[size  -i];
		str[size -i] = temp;
		i++;
	}

	return (str);
}

int	main()
{
	printf("%s\n",ft_strrev("abcdef g12"));	
}

