/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoc.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antlefeb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 14:40:06 by antlefeb          #+#    #+#             */
/*   Updated: 2022/02/20 12:42:57 by antlefeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int	ft_check(char *str);

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*atoc(char *str)
{
	char	*newstr;
	char	*buffer;
	int		i;
	int		len;

	i = ft_strlen(str);
	if (!ft_check(str))
		return (NULL);
	newstr = (char *)malloc((sizeof(char) * (i + 1)));
	buffer = newstr;
	if (buffer == 0)
		return (NULL);
	i = 0;
	len = 0;
	if (str[len] == '-' || str[len] == '+')
		len++;
	while (str[len + i] && (str[len + i] >= '0' && str[len + i] <= '9'))
	{
		buffer[i] = str[len + i];
		i++;
	}
	buffer[i] = '\0';
	return (newstr);
}

int	ft_check(char *str)
{
	int	i;

	i = 0;
	if (str[0] == '-')
		return (0);
	else if (str[i] == '+')
		i++;
	//while (str[i] || (str[i] >= '0' && str[i] <= '9'))
	//	i++;
	if (str[i] >= '0' && str[i] <= '9')
		return (1);
	else
		return (0);
}

#include <stdio.h>

int	main(int ac, char **av)
{
	char	*test;

	(void)ac;
	test = atoc(av[1]);	
	printf("%s \n", test);
	return (0);
}
