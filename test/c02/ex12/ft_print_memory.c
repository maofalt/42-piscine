/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motero <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 01:00:50 by motero            #+#    #+#             */
/*   Updated: 2022/02/07 03:44:59 by motero           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

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


//void	ft__print_val(unsigned char)
//{

//}

//void	ft_print_chars(unsigned char :)
//{

//}
void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned long	p;
	unsigned int	offset;

	offset = 0;
	p = (unsigned long)addr;
	//(void)size;
	while (offset < size)
	{
		ft_print_addr(p + offset);
		//ft_print_val((unsigned char *)(p + offset), size - offset);
		//ft_print_chars((unsigned char *)(p + offset), size - offset);
		write(1, "\n", 1);
		offset += 16;
	}
	return (addr);
}

int	main(void)
{
	unsigned int	size;
	void	*addr="Bonjour les aminches";
	unsigned long	l_addres;

	size = 10;
	l_addres = (unsigned long)addr;
	printf("%p\n",addr);
	printf("%ld\n", l_addres);
	ft_print_memory(addr, size);
}
