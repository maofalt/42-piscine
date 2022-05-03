/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motero <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 20:09:54 by motero            #+#    #+#             */
/*   Updated: 2022/02/05 22:03:46 by motero           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{	
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

/*int	main(void)
{
	char	result[10];
	char	*src;
	unsigned int	n;

	n = 10;
	src = "0123456789";
	printf("Ceci est le message source : \n %s", src);
	ft_strncpy(result, src, n);
	printf("Ceci est le message en dest : \n %s ", result);
	src = "01234561891";
	printf("Ceci est le message source : \n %s", src);
	ft_strncpy(result, src, n);
	printf("Ceci est le message en dest : \n %s ", result);
	src = "0123456";
	printf("Ceci est le message source : \n %s", src);
	ft_strncpy(result, src, n);
	printf("Ceci est le message en dest : \n %s ", result);
}*/
