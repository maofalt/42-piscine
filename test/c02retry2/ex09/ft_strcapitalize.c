/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motero <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 17:44:03 by motero            #+#    #+#             */
/*   Updated: 2022/02/07 05:19:21 by motero           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_lowc(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}

int	ft_upc(char c)

{
	return (c >= 'A' && c <= 'Z');
}

int	ft_is_alphanum(char c)
{
	return (ft_lowc(c) || ft_upc(c) || (c >= '0' && c <= '9'));
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!ft_is_alphanum(str[i - 1]) && ft_lowc(str[i]))
			str[i] = str[i] - 32;
		if (ft_is_alphanum(str[i - 1]) && ft_upc(str[i]))
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}
