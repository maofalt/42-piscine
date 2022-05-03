/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase_main.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motero <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 22:06:16 by motero            #+#    #+#             */
/*   Updated: 2022/02/06 00:55:39 by motero           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str);

int	main(void)
{
	char	*str;

	str = " ASDQZ";
	printf("The string to test is %s \n ", str);
	printf("1 if alpha or empty, 0 if any other %d\n", ft_str_is_uppercase(str));
	str = "QWEQWE  ";
	printf("The string to test is %s \n ", str);
	printf("1 if alpha or empty, 0 if any other %d\n", ft_str_is_uppercase(str));
	str = "AQWEQEZ";
	printf("The string to test is %s \n ", str);
	printf("1 if alpha or empty, 0 if any other %d\n", ft_str_is_uppercase(str));
	str = "";
	printf("The string to test is %s \n ", str);
	printf("1 if alpha or empty, 0 if any other %d\n", ft_str_is_uppercase(str));
}
