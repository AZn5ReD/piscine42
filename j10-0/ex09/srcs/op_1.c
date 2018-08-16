/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op-1.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchirk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/16 15:28:24 by jchirk            #+#    #+#             */
/*   Updated: 2018/08/16 16:04:59 by jchirk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_do_op.h"

int		ft_add(int a, int b, int *err)
{
	*err = 0;
	return (a + b);
}

int		ft_sub(int a, int b, int *err)
{
	*err = 0;
	return (a - b);
}

int		ft_mul(int a, int b, int *err)
{
	*err = 0;
	return (a * b);
}

int		ft_div(int a, int b, int *err)
{
	*err = 0;
	if (b == 0)
	{
		*err = 1;
		ft_putstr("Stop : division by zero");
		return (0);
	}
	else
		return (a / b);
}

int		ft_mod(int a, int b, int *err)
{
	*err = 0;
	if (b == 0)
	{
		*err = 1;
		ft_putstr("Stop : modulo by zero");
		return (0);
	}
	else
		return (a % b);
}
