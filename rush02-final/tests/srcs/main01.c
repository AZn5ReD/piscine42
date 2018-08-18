/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchirk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/18 14:31:19 by jchirk            #+#    #+#             */
/*   Updated: 2018/08/18 15:36:08 by jchirk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "colle.h"

void		print_first_line(int x)
{
	int i;

	i = 1;
	while (i <= x)
	{
		if (i == 1)
			ft_putchar('/');
		else if (i == x && x != 1)
			ft_putchar('\\');
		else
			ft_putchar('*');
		i++;
	}
	ft_putchar('\n');
}

void		print_last_line(int x)
{
	int i;

	i = 1;
	while (i <= x)
	{
		if (i == 1)
			ft_putchar('\\');
		else if (i == x && x != 1)
			ft_putchar('/');
		else
			ft_putchar('*');
		i++;
	}
	ft_putchar('\n');
}

void		print_line(int x)
{
	int i;

	i = 1;
	while (i <= x)
	{
		if (i == 1)
			ft_putchar('*');
		else if (i == x && x != 1)
			ft_putchar('*');
		else
			ft_putchar(' ');
		i++;
	}
	ft_putchar('\n');
}

void		colle(int x, int y)
{
	int i;

	i = 1;
	while (i <= y)
	{
		if (i == 1)
			print_first_line(x);
		else if (i == y && y != 1)
			print_last_line(x);
		else
			print_line(x);
		i++;
	}
}

int			main(int argc, char **argv)
{
	if (argc != 3 || ft_atoi(argv[1]) == 0 || ft_atoi(argv[2]) == 0)
		return (0);
	colle(ft_atoi(argv[1]), ft_atoi(argv[2]));
	return (0);
}
