/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motero <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 01:00:50 by motero            #+#    #+#             */
/*   Updated: 2022/02/07 18:54:43 by motero           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_addr(unsigned long addr)
{
	char	*base;
	char	buffer[17];
	int		i;

	base = "0123456789abcdef";
	i = 0;
	while (addr != '\0')
	{
		buffer[i] = base[addr % 16];
		addr = addr / 16;
		i++;
	}
	while (i < 16)
	{
		buffer[i] = '0';
		i++;
	}
	i--;
	while (i + 1)
	{
		write(1, &buffer[i], 1);
		i--;
	}
	write(1, ": ", 2);
}

void	ft_print_val(unsigned char *content, int surplus)
{
	int				i;
	char			*base;

	base = "0123456789abcdef";
	i = 0;
	while (i < 16 && surplus - i)
	{
		ft_putchar(base[content[i] / 16]);
		ft_putchar(base[content[i] % 16]);
		if (i % 2)
			write(1, " ", 1);
		i++;
	}
	while (i < 16)
	{
		write(1, "  ", 2);
		if (i % 2)
			write(1, " ", 1);
		i++;
	}
}

void	ft_print_chars(unsigned char *text, int surplus)
{
	int	i;

	i = 0;
	while (i < 16 && surplus--)
	{
		if (text[i] >= 32 && text[i] <= 126)
			ft_putchar(text[i]);
		else
			ft_putchar('.');
		i++;
	}
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned long	p;
	unsigned int	offset;

	offset = 0;
	p = (unsigned long)addr;
	(void)size;
	while (offset < size)
	{
		ft_print_addr(p + offset);
		ft_print_val((unsigned char *)(p + offset), size - offset);
		ft_print_chars((unsigned char *)(p + offset), size - offset);
		write(1, "\n", 1);
		offset += 16;
	}
	return (addr);
}
