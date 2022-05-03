/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_header.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motero <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 11:55:53 by motero            #+#    #+#             */
/*   Updated: 2022/02/20 16:59:40 by nigarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_HEADER_H
# define FT_HEADER_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

typedef struct s_dict {
	char	*key;
	char	*value;
	int		size;
}		t_dict;

#define MIN(x, y) (x < y) ? x : y

void	basic_cardinal(char *str, char *path);
char	*or_dic(char *file_path);
t_dict	*parse_to_struc(char *str_dict);
void	struct_to_card(char *nbr, t_dict *dict);
void	dynamic_free(t_dict *dict, int nb_elem);
char	*ft_atoc(char *str);
int		check_line(char c);
int		count_lines(char *str);
int		ft_atoi(char *str);
char	**key_index(char *str);
int		key_match(char	*str, char	**keys);
int		ft_strcmp(char *s1, char *s2);
char	*ft_key(char *str);
int		check_valid_dict(char	*str);
void free_double_ptr(char **strs);
#endif
