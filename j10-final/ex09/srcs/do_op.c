/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchirk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/15 14:01:15 by jchirk            #+#    #+#             */
/*   Updated: 2018/08/21 12:54:22 by jchirk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_do_op.h"
#include "ft_opp.h"

int			ft_calc_op(int a, int b, char *op)
{
	int i;
	int err;
	int ret;
	int *ptr_err;

	i = 0;
	err = 0;
	ptr_err = &err;
	while (g_opptab[i].op != 0)
	{
		if (ft_strcmp(g_opptab[i].op, op) == 1)
		{
			ret = g_opptab[i].ft(a, b, ptr_err);
			break ;
		}
		i++;
	}
	if (*ptr_err != 0 || g_opptab[i].op == 0)
	{
		ft_usage(a, b, ptr_err);
		return (0);
	}
	ft_putnbr(ret);
	ft_putchar('\n');
	return (0);
}

int			ft_do_op(int argc, char **argv)
{
	if (argc != 4)
		return (0);
	ft_calc_op(ft_atoi(argv[1]), ft_atoi(argv[3]), argv[2]);
	return (0);
}
