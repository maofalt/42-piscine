/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motero <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 16:37:28 by motero            #+#    #+#             */
/*   Updated: 2022/02/07 16:51:12 by motero           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	main(void)
{
	char	*s1 = "Coucou cest mao";
	char	*s2 = "Coucou cest maof";
	char	*s3 = "Coucou ";
	int	n;

	n = 0;
	printf("Results with strcmp\n");
	printf("n : %d | ", n);
	printf("S1 : %s | ", s1);
	printf("S2 : %s | ", s2);
	printf("S3 : %s | \n\n", s3);
	printf("ORIGINAL FORMULA |\n s1 - s2 %d \n", strncmp(s1,s2,n));
	printf("BREW HOME | \n s1 - s2 %d", ft_strncmp(s1,s2,n));
}

