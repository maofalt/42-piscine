/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motero <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 20:09:54 by motero            #+#    #+#             */
/*   Updated: 2022/02/05 21:08:47 by motero           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*int	main(void)
{
	char	result[10];
	char	*src;

	src = "0123456789";
	printf("Ceci est le message source : \n %s", src);
	ft_strcpy(result, src);
	printf("Ceci est le message en dest : \n %s ", result);
}*/
