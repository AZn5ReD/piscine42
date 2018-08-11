/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_header.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchirk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/11 20:38:45 by jchirk            #+#    #+#             */
/*   Updated: 2018/08/11 20:56:21 by jchirk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_HEADER_H
# define FT_HEADER_H
# include "ft_header.h"

int		ft_algo(int **sudoku, int pos);
void	ft_print_sudoku(int **sudoku);
int		is_valid(int **sudoku, int row, int col, int num);

#endif
