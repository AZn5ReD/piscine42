/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_sudoku.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbonnete <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/11 14:43:01 by lbonnete          #+#    #+#             */
/*   Updated: 2018/08/11 16:59:29 by jchirk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

int		ft_algo(int **sudoku, int pos);

void	ft_print_sudoku(int **sudoku);

void	ft_replace_0(char **sudoku)
{
	int i;
	int j;

	i = 1;
	while (i < 10)
	{
		j = 0;
		while (j < 9)
		{
			if (sudoku[i][j] == '.')
				sudoku[i][j] = '0';
			j++;
		}
		i++;
	}
}

void	ft_malloc(int **sudoku)
{
	int i;

	i = 0;
	while (i < 9)
	{
		sudoku[i] = (int*)malloc(sizeof(int) * 9 + 1);
		i++;
	}
}

void	ft_fill_sudoku(int **sudoku, int argc, char **argv)
{
	int i;
	int j;

	i = 1;
	while (i < argc)
	{
		j = 0;
		while (j < 9)
		{
			sudoku[i - 1][j] = argv[i][j] - '0';
			j++;
		}
		i++;
	}
}

int		main(int argc, char **argv)
{
	int **sudoku;

	sudoku = (int**)malloc(sizeof(int*) * 9 + 1);
	if (argc != 10)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	ft_malloc(sudoku);
	ft_replace_0(argv);
	ft_fill_sudoku(sudoku, argc, argv);
	if (ft_algo(sudoku, 0))
		ft_print_sudoku(sudoku);
	else
		write(1, "Error\n", 6);
	free(sudoku);
	return (0);
}
