/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_regles.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchirk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/11 13:42:35 by jchirk            #+#    #+#             */
/*   Updated: 2018/08/11 16:35:05 by jchirk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_in_row(int **sudoku, int row, int num)
{
	int j;

	j = 0;
	while (j < 9)
	{
		if (num == sudoku[row][j])
			return (1);
		j++;
	}
	return (0);
}

int		is_in_col(int **sudoku, int col, int num)
{
	int i;

	i = 0;
	while (i < 9)
	{
		if (num == sudoku[i][col])
			return (1);
		i++;
	}
	return (0);
}

int		is_in_box(int **sudoku, int s_row, int s_col, int num)
{
	int i;
	int j;

	i = s_row;
	j = s_col;
	while (i < s_row + 3)
	{
		while (j < s_col + 3)
		{
			if (num == sudoku[i][j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int		is_valid(int **sudoku, int row, int col, int num)
{
	int ret;

	ret = 0;
	ret += is_in_row(sudoku, row, num);
	ret += is_in_col(sudoku, col, num);
	ret += is_in_box(sudoku, row - row % 3, col - col % 3, num);
	return ((ret > 0) ? 0 : 1);
}
