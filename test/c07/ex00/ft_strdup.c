/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motero <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 11:51:28 by motero            #+#    #+#             */
/*   Updated: 2022/02/15 21:38:29 by motero           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int	ft_strlen(char *word)
{
	int	i;

	i = 0;
	while (word[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*str;
	int		size;
	int		i;

	size = ft_strlen(src);
	str = (char *)malloc(sizeof(char) * (size + 1));
	if (!str)
		return (0);
	i = 0;
	while (src[i] != '\0')
	{
		str[i] = src[i];
		i++;
	}
	str[i] = 0;
	return (str);
}

/*int	main(void)
{
	printf("%s\n", strcmp(strdup("Test"), ft_strdup("Test")) == 0 ?
			"OK" :
			"Fail");
	printf("%s\n", strcmp(strdup("484df41hdy1h111fs1fsd15sf15sdf115d15f
	dgs15gfd4sg1615df156g1515g4erg4561esg156gr15156g15eg15eg15e51e51g15
	15ge156e156eg156e15156ge516e1551eg51eg15g1551eg15e516eg15e15eg1515
	e55eg51e15e51g5151eg15eg1515egr515151erg51er51e51e551ee5eg51egr51er
	51er5er5eg51e5r1e51rg5egr5eg51erg5e1r51e6rg51egr516ee5g15e1g5e1g5e
	1g51ger51egr51erg55reg5er55er55"), ft_strdup("484df41hdy1h111fs1fs
	d15sf15sdf115d15fdgs15gfd4sg1615df156g1515g4erg4561esg156gr15156g1
	5eg15eg15e51e51g1515ge156e156eg156e15156ge516e1551eg51eg15g1551eg15
	e516eg15e15eg1515e55eg51e15e51g5151eg15eg1515egr515151erg51er51e51e
	551ee5eg51egr51er51er5er5eg51e5r1e51rg5egr5eg51erg5e1r51e6rg51egr51
	6ee5g15e1g5e1g5e1g51ger51egr51erg55reg5er55er55")) == 0 ?
			"OK" :
			"Fail");
	    printf("%s\n", strcmp(strdup(""), ft_strdup("")) == 0 ?
            "OK" :
            "Fail");

}*/
