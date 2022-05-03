/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase_main.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motero <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 01:15:20 by motero            #+#    #+#             */
/*   Updated: 2022/02/06 17:40:37 by motero           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strlowcase(char *str);

int	main(void)
{
	//char    *p_lwr;
	char 	*p_all;
	char	*p_emp;
	char	lowercase[] = "abcdefghijklmnopqrstuvwxyz";
	char	allcases[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char	empty[] = "";

	p_all = allcases;
	//p_lwr = lowercase;
	p_emp = empty;
	printf("lower case is = %s \n", lowercase);
	printf("upper case is = %s \n", ft_strlowcase(lowercase));
        printf("lower case is = %s \n", allcases);
        printf("upper case is = %s \n", ft_strlowcase(p_all));
        printf("lower case is empty \n");
        printf("upper case is = %s \n", ft_strlowcase(p_emp));

}
