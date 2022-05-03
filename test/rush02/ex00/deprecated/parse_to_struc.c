/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_to_struc.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motero <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 15:21:58 by motero            #+#    #+#             */
/*   Updated: 2022/02/20 12:53:40 by antlefeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

int	check_line(char c)
{
	if (c == '\n')
		return (1);
	return (0);
}

int	count_lines(char *str)
{
	int	i;
	int	line;

	line = 0;
	i = 0;
	while (str[i])
	{
		while (str[i] && check_line(str[i]))
			i++;
		if (str[i])
			line++;
		while (str[i] && !check_line(str[i]))
			i++;
	}
	return (line);
}

int	ft_len_line(char *str)
{
	int	i;

	i = 0;
	while (str[i] && !check_line(str[i]))
	{
		i++;
	}
	return (i);
}

char	*ft_key(char *str)
{
	int		len;
	int		i;
	char	*key;

	i = 0;
	len = 0;
	while (str[len] && str[len] != ' ')
		len++;
	key = (char *)malloc(sizeof(char) * len + 1);
	if (!key)
		return (NULL);
	while (i < len)
	{
		key[i] = str[i];
		i++;
	}
	key[i] = '\0';
	return (key);
}

char	*ft_value(char *str, int key_len)
{
	int		len;
	int		i;
	char	*value;

	i = 0;
	len = 0;
	while (str[len] && str[len] != '\n')
		len++;
	len -= key_len + 2;
	value = (char *)malloc(sizeof(char) * len + 1);
	if (!value)
		return (NULL);
	while (i < len)
	{
		value[i] = str[key_len + 2 + i];
		i++;
	}
	value[i] = '\0';
	return (value);
}

int	ft_strlen(char	*str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

t_dict	*ft_split(char *str)
{
	t_dict	*dict;
	int		i;

	i = 0;
	dict = malloc(sizeof(t_dict) * count_lines(str));
	if (!dict)
		return (NULL);
	while (*str)
	{
		while (*str && check_line(*str))
			str++;
		if (*str)
		{
			dict[i].key = ft_key(str);
			dict[i].size = ft_strlen(dict[i].key);
			dict[i].value = ft_value(str, dict[i].size);
			i++;
		}
		while (*str && !check_line(*str))
			str++;
	}
	return (dict);
}

int	main(void)
{	
    char        *str;
        int     i;
        t_dict  *tab;

        str = or_dic("numbers.dict");
	i = 0;
        tab = ft_split(str);
        while(i < count_lines(str))
        {
                printf("Key | %s, Value | %s, Size of key | %d\n", tab[i].key, tab[i].value, tab[i].size);
                i++;
        }
}
/*int main(void)
{
    char	*str = "0: zero\n\n\n1: one\n2: two\n3: three\n4: four\n5: five\n6: six\n7: seven\n8: eight\n9: nine\n10: ten\n11: eleven\n12: twelve\n13: thirteen\n14: fourteen\n15: fifteen\n16: sixteen\n17: seventeen\n18: eighteen\n19: nineteen\n20: twenty";
	int 	i;
	t_dict	*tab;

	i = 0;
	tab = ft_split(str);
	while(i < )
	{
		printf("Key | %s, Value | %s, Size of key | %d\n", tab[i].key, tab[i].value, tab[i].size);
		i++;
	}
}*/
