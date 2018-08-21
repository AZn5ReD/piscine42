/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchirk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/15 14:01:15 by jchirk            #+#    #+#             */
/*   Updated: 2018/08/20 16:02:04 by jchirk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_do_op.h"

t_op_fct	*ft_init_do_op(t_op_fct *op_tab)
{
	if (!(op_tab = (t_op_fct*)malloc(sizeof(t_op_fct) * 6)))
		return (0);
	op_tab[0].op = "+";
	op_tab[0].ft = &ft_op_plus;
	op_tab[1].op = "-";
	op_tab[1].ft = &ft_op_minus;
	op_tab[2].op = "*";
	op_tab[2].ft = &ft_op_multiply;
	op_tab[3].op = "/";
	op_tab[3].ft = &ft_op_divide;
	op_tab[4].op = "%";
	op_tab[4].ft = &ft_op_modulo;
	op_tab[5].op = 0;
	op_tab[5].ft = 0;
	return (op_tab);
}

int			ft_calc_op(t_op_fct *op_tab, int a, int b, char *op)
{
	int i;
	int err;
	int ret;
	int *ptr_err;

	i = 0;
	err = 0;
	ret = 0;
	ptr_err = &err;
	while (op_tab[i].op != 0)
	{
		if (ft_strcmp(op_tab[i].op, op) == 1)
		{
			ret = op_tab[i].ft(a, b, ptr_err);
			break ;
		}
		i++;
	}
	if (*ptr_err != 0)
		return (0);
	ft_putnbr(ret);
	ft_putchar('\n');
	return (0);
}

int			ft_do_op(int argc, char **argv)
{
	t_op_fct	*op_tab;

	op_tab = 0;
	if (argc != 4)
		return (0);
	op_tab = ft_init_do_op(op_tab);
	ft_calc_op(op_tab, ft_atoi(argv[1]), ft_atoi(argv[3]), argv[2]);
	return (0);
}
