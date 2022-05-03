/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motero <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 21:40:29 by motero            #+#    #+#             */
/*   Updated: 2022/02/16 00:41:03 by motero           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char	*str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	length_phrase(int size, char **strs, char *sep)
{
	int	length;
	int	i;

	i = 0;
	length = 0;
	while (i < size)
	{
		length += ft_strlen(strs[i]);
		i++;
	}
	length += ((size - 1) * ft_strlen(sep));
	return (length);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*phrase;
	char	*buffer;
	int		length;
	int		i;

	if (size <= 0)
		return ((char *)malloc(sizeof(char)));
	length = length_phrase(size, strs, sep);
	phrase = (char *)malloc((length + 1) * sizeof(char));
	buffer = phrase;
	if (!phrase)
		return (0);
	i = 0;
	while (i < size)
	{
		ft_strcpy(buffer, strs[i]);
		buffer += ft_strlen(strs[i]);
		if (i++ < size - 1)
		{
			ft_strcpy(buffer, sep);
			buffer += ft_strlen(sep);
		}
	}
	buffer = '\0';
	return (phrase);
}

/*int	main(void)
{
	char	**strs;
	char	*separator;
	char	*result;
	int	size;

	size = 3;
	strs = (char **)malloc(3 * sizeof(char *));
	strs[0] = (char *)malloc(sizeof(char) * 5 + 1);
	strs[1] = (char *)malloc(sizeof(char) * 7 + 1);
	strs[2] = (char *)malloc(sizeof(char) * 14 + 1);
	strs[0] = "Hello";
	strs[1] = "friend,";
	strs[2] = "you are awesome";
	separator = "| |";
	result = ft_strjoin(size, strs, separator);
	printf("%s$\n", result);
	free(result);
}*/

/*int	main(int argc, char **argv)
{
	printf("./ex03/output___said___this___is___a___success :\n");
	printf("%s\n",  ft_strjoin(argc - 2, &argv[2], argv[1]));
}*/
