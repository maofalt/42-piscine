/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motero <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 20:57:15 by motero            #+#    #+#             */
/*   Updated: 2022/02/16 23:23:38 by motero           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	is_separator(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int	len_word(char *str, char *charset)
{
	int	len;

	len = 0;
	while (!is_separator(str[len], charset) && str[len])
	{
		len++;
	}
	return (len);
}

char	*alloc_write(char *str, char *charset)
{
	char	*word;
	int		size_word;
	int		i;

	size_word = len_word(str, charset);
	word = (char *)malloc(sizeof(char) * (size_word + 1));
	i = 0;
	while (i < size_word)
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

int	count_words(char *str, char *charset)
{
	int	i;
	int	nbr_w;

	nbr_w = 0;
	i = 0;
	while (str[i])
	{
		while (is_separator(str[i], charset) && str[i])
			i++;
		if (str[i])
			nbr_w++;
		while (!is_separator(str[i], charset) && str[i])
			i++;
	}
	return (nbr_w);
}

char	**ft_split(char *str, char *charset)
{
	char	**tab;
	char	**buffer;
	int		i;

	if (charset == NULL || str == NULL)
		return (NULL);
	tab = (char **)malloc(sizeof(char *) * (count_words(str, charset) + 1));
	buffer = tab;
	if (!buffer)
		return (0);
	i = 0;
	while (*str)
	{
		while (*str && is_separator(*str, charset))
			str++;
		if (*str)
		{
			buffer[i] = alloc_write(str, charset);
			i++;
		}
		while (*str && !is_separator(*str, charset))
			str++;
	}
	buffer[i] = 0;
	return (tab);
}

/*int main(int argc, char **argv)
{
    char **test = ft_split(argv[1], "");
    int    i = 0;
    if (argc == 3)
    {
        while (test[i])
        {
            printf("%s\n", test[i]);
            free(test[i]);
            i++;
        }
		free(test[i]);
    }
    return (0);
}*/
