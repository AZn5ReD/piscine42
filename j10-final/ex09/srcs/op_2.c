/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_2.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchirk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/21 12:41:45 by jchirk            #+#    #+#             */
/*   Updated: 2018/08/21 12:57:20 by jchirk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_do_op.h"

int		ft_usage(int a, int b, int *err)
{
	int j;

	*err = 1;
	a = 0;
	b = 0;
	j = 0;
	ft_putstr("error : only [");
	while (g_opptab[j].op != 0)
	{
		ft_putchar(' ');
		ft_putstr(g_opptab[j].op);
		j++;
	}
	ft_putstr("] are accepted.");
	ft_putchar('\n');
	return (0);
}
