/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha_main.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motero <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 22:06:16 by motero            #+#    #+#             */
/*   Updated: 2022/02/06 00:49:42 by motero           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str);

int	main(void)
{
	char	*str;

	str = " abcdefgh0";
	printf("The string to test is %s \n ", str);
	printf("1 if alpha or empty, 0 if any other %d\n", ft_str_is_lowercase(str));
	str = "abcdf ";
	printf("The string to test is %s \n ", str);
	printf("1 if alpha or empty, 0 if any other %d\n", ft_str_is_lowercase(str));
	str = "asdasdBFQ";
	printf("The string to test is %s \n ", str);
	printf("1 if alpha or empty, 0 if any other %d\n", ft_str_is_lowercase(str));
	str = "";
	printf("The string to test is %s \n ", str);
	printf("1 if alpha or empty, 0 if any other %d\n", ft_str_is_lowercase(str));
}
