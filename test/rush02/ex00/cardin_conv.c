/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cardin_conv.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nigarcia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 10:10:58 by nigarcia          #+#    #+#             */
/*   Updated: 2022/02/20 21:54:00 by nigarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

t_dict	*ft_split(char *str);
char	*ft_strndup(char *src, int n);
void	ft_putstr(char *str);
char	*get_value_by_key(char *key, t_dict *dict, int nb_elem);
char	*get_value_by_size(int size, t_dict *dict, int nb_elem);
int		deal_with_zeros(char *nbr, int n, t_dict *dict, int nb_elem);
int		ft_strlen(char *str);

void	print_mod_2_3(int n, char *print, t_dict *dict, int nb_elem)
{
	ft_putstr(get_value_by_key(print, dict, nb_elem));
	ft_putstr(" ");
	ft_putstr(get_value_by_size(n, dict, nb_elem));
}

void	print_word(int n, char *print, t_dict *dict, int nb_elem)
{
	if (n % 3 == 0)
		print_mod_2_3(3, print, dict, nb_elem);
	if (n % 3 == 1)
		print_mod_2_3(n, print, dict, nb_elem);
	if (n % 3 == 2)
	{
		if (print[0] > '1')
			print[1] = '0';
		ft_putstr(get_value_by_key(print, dict, nb_elem));
		if (n > 2)
		{
			if (print[0] == '1')
			{
				ft_putstr(" ");
				ft_putstr(get_value_by_size(n - 1, dict, nb_elem));
			}
		}
	}
}

int	check_n(int n, char *nbr, t_dict *dict, int nb_elem)
{
	if (n == 0)
		return (0);
	if (n == 1)
	{
		if (nbr[0] != '0')
			ft_putstr(get_value_by_key(nbr, dict, nb_elem));
		return (0);
	}
	return (1);
}

void	cardin_conv(char *nbr, t_dict *dict, int nb_elem)
{
	char	*print;
	int		n;
	int		next_zero;
	int		jump;

	n = ft_strlen(nbr);
	if (!check_n(n, nbr, dict, nb_elem))
		return ;
	print = ft_strndup(nbr, 1 + (n % 3 == 2));
	if (print[0] == '0')
	{
		next_zero = deal_with_zeros(nbr, n, dict, nb_elem);
		ft_putstr(" ");
		free(print);
		cardin_conv(nbr + next_zero, dict, nb_elem);
		return ;
	}	
	print_word(n, print, dict, nb_elem);
	if (n > 2 || (n == 2 && print[0] != '1'))
		ft_putstr(" ");
	jump = (n % 3 == 2 && print[0] == '1');
	free(print);
	cardin_conv(nbr + 1 + jump, dict, nb_elem);
}

void	struct_to_card(char *nbr, t_dict *dict)
{
	if (ft_strcmp(nbr, "0") == 0)
		ft_putstr(get_value_by_key("0", dict, 41));
	else
		cardin_conv(nbr, dict, 41);
	ft_putstr("\n");
}
/*
int	main(void)
{
	char	*str;
	t_dict	*t;
	char	*nbr;

	str = or_dic("numbers.dict");
	t = ft_split(str);
	free(str);
	nbr = "3";

	//printf("%s \n", get_value_by_key("1000000", t, 41));
	//printf("%s \n", get_value_by_size(7, t, 41));
	cardin_conv(nbr, t, 41);
	//printf("%s \n", ft_strndup("9854", 1));
	//cardin_conv("45874");
	//char *s = ft_strndup("123456", 2, 0);
	//s[1] = '8';
	//printf("\n%s\n", s);
}*/
