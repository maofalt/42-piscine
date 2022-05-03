/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rush.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motero <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 15:41:33 by motero            #+#    #+#             */
/*   Updated: 2022/02/12 19:17:25 by motero           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_RUSH_H
# define FT_RUSH_H

//include all fonction needed. Just include ft_rush.h at the head of each doc.c
void	ft_putstr(char *str);

void	ft_putchar(char str);

int		*ft_constraints(char *argv);

int		ft_solv_sky(int row, int col, int *cstr, int board[4][4]);

//int		ft_valid_place(int row, int col, int board[4][4]);

int		ft_check_col_row(int col, int row, int board[4][4], int nbr);

int		ft_checkup(int row, int board[4][4], int constr[16]);

int		ft_checkdown(int row, int board[4][4], int constr[16]);

int		ft_checkleft(int col, int board[4][4], int constr[16]);

int		ft_checkright(int col, int board[4][4], int constr[16]);

int		ft_build_table(int index, int nbr, int board[4][4], int *cstr);

int		ft_valid_table(int board[4][4], int * cstr);

void		ft_print_table(int board[4][4]);
#endif
