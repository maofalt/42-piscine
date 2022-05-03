/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motero <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 23:22:32 by motero            #+#    #+#             */
/*   Updated: 2022/02/08 17:48:29 by motero           ###   ########.fr       */
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

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	size_dest;

	i = 0;
	size_dest = size_s(dest);
	if (size <= size_dest)
		return (size + size_s(src));
	while (src[i] != '\0' && size_dest + 1 < size)
	{
		dest[size_dest] = src[i];
		i++;
		size_dest++;
	}
	dest[size_dest] = '\0';
	return (size_dest + size_s(&src[i]));
}

/*int   main(void)
{
        char    *s = "ab";
        char    d[12] = "012345678";
        int     n;

        n = 14;
        (void)s;
        printf("Text to concat | %s \n", s);
        printf("Before concat | %s\n", d);
        printf("size of %d", ft_strlcat(d, s,n));
        printf("After concat | %s",d);

}*/
