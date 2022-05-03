/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motero <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 22:06:16 by motero            #+#    #+#             */
/*   Updated: 2022/02/06 00:48:30 by motero           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{	
		if (str[i] < 'a' || str[i] > 'z')
			return (0);
		i++;
	}
	return (1);
}

/*int	main(void)
{
	char	*str;

	str = " abcdefgh0";
	printf("The string to test is %s \n ", str);
	printf("1 if alpha or empty, 0 if any other %d\n", ft_str_is_alpha(str));
	str = "abcdef ";
	printf("The string to test is %s \n ", str);
	printf("1 if alpha or empty, 0 if any other %d\n", ft_str_is_alpha(str));
	str = "000000000";
	printf("The string to test is %s \n ", str);
	printf("1 if alpha or empty, 0 if any other %d\n", ft_str_is_alpha(str));
	str = "";
	printf("The string to test is %s \n ", str);
	printf("1 if alpha or empty, 0 if any other %d\n", ft_str_is_alpha(str));
}*/
