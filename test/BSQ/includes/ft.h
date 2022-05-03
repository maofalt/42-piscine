/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcalon <jcalon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 00:28:01 by motero            #+#    #+#             */
/*   Updated: 2022/02/23 16:22:10 by jcalon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H
# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# define BUFF_SIZE 100000

int		check_line_len(char **theboard);
int		check_inter(char *boardline, char a, char b, int i);
int		check_num_first_line(char *firstline, char *boardline, int i);
int		check_char_first_line(char *firstline);
int		check_doubles(char *threechar, int i);
char	**ft_split(char *str, char *charset);
char	**parse_board(char *pathtoboard);
int		**partial_sums(char **board, char obstacle, int row_max, int col_max);
int		possible(int col_max, int row_max);
int		*find_bbq(int **p, int row_max, int col_max);
int		partial_s(int **b, int r, int c, int s);
void	fill_board(int *coord, char **board);
void	print_board(char **board);
int		ft_strlen(char *str);
int		ft_lines(char **board);
void	ft_putstr(char *str);
void	ft_putchar(char c);
char	*fill_strange(void);
char	**parse_strange_board(void);
char	*ft_maxistrncat(char *old, char *src, unsigned int nb);
int		check_all(char *boardline, char **board);
void	xavier_niel(char **board);
void	i_want_to_break_free(int **board, int col);
void	new_coord(int *row, int *col, int *size);

#endif
