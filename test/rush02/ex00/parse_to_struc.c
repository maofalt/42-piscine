/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_to_struc.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motero <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 15:21:58 by motero            #+#    #+#             */
/*   Updated: 2022/02/20 17:20:36 by nigarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

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
	char	*buff;

	i = 0;
	len = 0;
	buff = ft_atoc(str);
	while (buff[len])
		len++;
	key = (char *)malloc(sizeof(char) * len +1);
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

char	*ft_value(char *str, int len)
{
	int		i;
	int		v;
	char	*value;

	v = 0;
	i = 0;
	while (str[len] && (str[len] == ' ' || str[len] == ':'))
		len++;
	while (str[len + v] && str[len + v] != '\n')
		v++;
	v--;
	while (str[len + v] == ' ')
		v--;
	v++;
	value = (char *)malloc(sizeof(char) * v + 1);
	if (!value)
		return (NULL);
	while (i < v)
	{
		value[i] = str[len + i];
		i++;
	}
	value[i] = '\0';
	return (value);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

t_dict	*parse_to_struc(char *str)
{
	t_dict	*dict;
	char	**keys;
	int		index;
	char	*kd;

	if (check_valid_dict(str) == 0)
		return (NULL);
	kd = or_dic("only_keys.dict");
	keys = key_index(kd);
	free(kd);
	dict = malloc(sizeof(t_dict) * 32);
	if (!dict)
		return (NULL);
	while (*str)
	{
		while (*str && check_line(*str))
			str++;
		if (*str && key_match(str, keys) >= 0)
		{
				index = key_match(str, keys);
			dict[index].key = ft_key(str);
			dict[index].size = ft_strlen(dict[index].key);
			dict[index].value = ft_value(str, dict[index].size);
		}
		while (*str && !check_line(*str))
			str++;
	}
	free_double_ptr(keys);
	return (dict);
}

int	main(void)
{
	char	*str;
	int		i;
	t_dict	*t;

	str = or_dic("numbers.dict");
	i = 0;
	t = parse_to_struc(str);
	(void)t;
	while (i < 32)
	{
		printf("Key|%s| Value|%s| Size |%d\n", t[i].key, t[i].value, t[i].size);
		i++;
	}
}

