/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_sudoku.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbonnete <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/11 14:43:01 by lbonnete          #+#    #+#             */
/*   Updated: 2018/08/11 21:08:34 by jchirk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include "ft_header.h"

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

int		ft_fill_sudoku(int **sudoku, int argc, char **argv)
{
	int i;
	int j;

	i = 1;
	while (i < argc)
	{
		j = 0;
		while (j < 9)
		{
			if (argv[i][j] >= '0' && argv[i][j] <= '9')
				sudoku[i - 1][j] = argv[i][j] - '0';
			else
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int		main(int argc, char **argv)
{
	int **sudoku;

	sudoku = (int**)malloc(sizeof(int*) * 9 + 1);
	ft_malloc(sudoku);
	if (argc != 10 || sudoku == NULL)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	ft_replace_0(argv);
	if (ft_fill_sudoku(sudoku, argc, argv) == 1)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	if (ft_algo(sudoku, 0))
		ft_print_sudoku(sudoku);
	else
		write(1, "Error\n", 6);
	free(sudoku);
	return (0);
}
