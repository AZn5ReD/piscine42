/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_header.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchirk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/11 20:38:45 by jchirk            #+#    #+#             */
/*   Updated: 2018/08/12 18:45:07 by lbonnete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_HEADER_H
# define FT_HEADER_H

int		ft_algo(int **sudoku, int pos);
void	ft_print_sudoku(int **sudoku);
int		is_valid(int **sudoku, int row, int col, int num);
int		ft_sudoku_checker(int **sudoku, int **ukodus);
int		ft_olga(int **sudoku, int pos);
int		ft_17check(int **sudoku);

#endif
