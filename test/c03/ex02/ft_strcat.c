/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motero <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 16:52:16 by motero            #+#    #+#             */
/*   Updated: 2022/02/07 19:00:14 by motero           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	size_s(char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	size_dest;
	int	i;

	i = 0;
	size_dest = size_s(dest);
	while (src[i] != '\0')
	{
		dest[size_dest + i] = src[i];
		i++;
	}
	dest[size_dest + i] = '\0';
	return (dest);
}

/*int	main(void)
{
	char	*s = "ab";
	char	d[12] = "012345678";
	

	(void)s;
	printf("Text to concat | %s \n", s);
	printf("Before concat | %s\n", d);
	ft_strcat(d, s);
	printf("After concat | %s",d);

}*/
