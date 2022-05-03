/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize_main.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motero <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 01:15:20 by motero            #+#    #+#             */
/*   Updated: 2022/02/06 21:17:09 by motero           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strcapitalize(char *str);

int	main(void)
{
	//char    *p_lwr;
	char 	*p_all;
	char	*p_emp;
	char	lowercase[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	char	allcases[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char	empty[] = "";

	p_all = allcases;
	//p_lwr = lowercase;
	p_emp = empty;
	printf("lower case is = %s \n", lowercase);
	printf("upper case is = %s \n", ft_strcapitalize(lowercase));
        printf("lower case is = %s \n", allcases);
        printf("upper case is = %s \n", ft_strcapitalize(p_all));
        printf("lower case is empty \n");
        printf("upper case is = %s \n", ft_strcapitalize(p_emp));

}
