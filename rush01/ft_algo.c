/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algo.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchirk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/11 14:15:06 by jchirk            #+#    #+#             */
/*   Updated: 2018/08/11 16:52:39 by jchirk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_valid(int **sudoku, int row, int col, int num);

int		ft_algo(int **sudoku, int pos)
{
	int i;
	int j;
	int val;

	if (pos == 9 * 9)
		return (1);
	i = pos / 9;
	j = pos % 9;
	val = 1;
	if (sudoku[i][j] != 0)
		return (ft_algo(sudoku, pos + 1));
	while (val <= 9)
	{
		if (is_valid(sudoku, i, j, val) == 1)
		{
			sudoku[i][j] = val;
			if (ft_algo(sudoku, pos + 1))
				return (1);
		}
		val++;
	}
	sudoku[i][j] = 0;
	return (0);
}
