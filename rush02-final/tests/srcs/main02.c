/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchirk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/18 14:32:55 by jchirk            #+#    #+#             */
/*   Updated: 2018/08/18 14:33:26 by jchirk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "colle.h"

#define HG 'A'
#define HD 'A'
#define HH 'B'
#define BG 'C'
#define BD 'C'
#define BB 'B'
#define LL 'B'

void		print_first_line(int x)
{
	int i;

	i = 1;
	while (i <= x)
	{
		if (i == 1)
			ft_putchar(HG);
		else if (i == x && x != 1)
			ft_putchar(HD);
		else
			ft_putchar(HH);
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
			ft_putchar(BG);
		else if (i == x && x != 1)
			ft_putchar(BD);
		else
			ft_putchar(BB);
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
			ft_putchar(LL);
		else if (i == x && x != 1)
			ft_putchar(LL);
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
