/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alphatest.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motero <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 22:06:16 by motero            #+#    #+#             */
/*   Updated: 2022/02/05 23:18:26 by motero           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int c;

	c = 0;
	while (str[c] != '\0')
	{
		if ((str[c] < 'A') || (str[c] > 'Z' && str[c] < 'a') || (str[c] > 'z'))
			return (0);
		c++;
	}
	return (1);
}

int	main(void)
{
	char	*str;

	str = "abcdefgh ";
	printf("The string to test is %s \n ", str);
	printf("1 if alpha or empty, 0 if any other %d\n", ft_str_is_alpha(str));
	str = "0abcdef";
	printf("The string to test is %s \n ", str);
	printf("1 if alpha or empty, 0 if any other %d\n", ft_str_is_alpha(str));
	str = "000000000";
	printf("The string to test is %s \n ", str);
	printf("1 if alpha or empty, 0 if any other %d\n", ft_str_is_alpha(str));
	str = " ";
	printf("The string to test is %s \n ", str);
	printf("1 if alpha or empty, 0 if any other %d\n", ft_str_is_alpha(str));
}
