/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motero <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 00:28:16 by motero            #+#    #+#             */
/*   Updated: 2022/02/07 06:03:37 by motero           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_chr_print(char chr)
{
	if (chr < ' ' || chr == 127)
		return (0);
	else
		return (1);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_puthex(char num)
{
	char			*base;
	unsigned char	c;

	c = (unsigned char)num;
	base = "0123456789abcdef";
	ft_putchar('\\');
	ft_putchar(base[c / 16]);
	ft_putchar(base[c % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (ft_chr_print(str[i]))
			ft_putchar(str[i]);
		else
			ft_puthex(str[i]);
		i++;
	}
}
/*int	main(void)
{
	printf("Coucou\ntu vas bien ?");
	ft_putchar('\n');
	ft_putstr_non_printable("Coucou\ntu vas bien ?");
}*/
