/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcalon <jcalon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 21:50:08 by ljospin           #+#    #+#             */
/*   Updated: 2022/02/22 02:11:16 by jcalon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

int	test_char(char str, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (str == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int	str_words(char *str, char *charset)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (str[i])
	{
		while (str[i] && test_char(str[i], charset))
			i++;
		if (str[i])
			count++;
		while (str[i] && !test_char(str[i], charset))
			i++;
	}
	return (count);
}

int	word_size(int i, char *str, char *charset)
{
	int	size;

	size = 0;
	while (str[i] && !test_char(str[i], charset))
	{
		if (!test_char(str[i], charset))
			size++;
		i++;
	}
	return (size);
}

void	splitor(char *str, char *charset, char **split)
{
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		while (str[i] != '\0' && !test_char(str[i], charset))
		{
			k = 0;
			split[j] = malloc(sizeof(char) * word_size(i, str, charset) + 1);
			while (str[i] != '\0' && !test_char(str[i], charset))
			{
				split[j][k] = str[i];
				i++;
				k++;
			}
			split[j][k] = '\0';
			j++;
		}
		if (str[i] != '\0')
			i++;
	}
}

char	**ft_split(char *str, char *charset)
{
	char	**split;
	int		size;

	size = str_words(str, charset);
	split = malloc(sizeof(char *) * (size + 1));
	if (split == NULL)
		return (NULL);
	splitor(str, charset, split);
	split[size] = '\0';
	return (split);
}
