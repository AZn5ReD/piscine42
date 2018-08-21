/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchirk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/14 20:31:23 by jchirk            #+#    #+#             */
/*   Updated: 2018/08/15 18:17:14 by jchirk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_do_op.h"

int		ft_op_plus(int a, int b, int *err)
{
	*err = 0;
	return (a + b);
}

int		ft_op_minus(int a, int b, int *err)
{
	*err = 0;
	return (a - b);
}

int		ft_op_multiply(int a, int b, int *err)
{
	*err = 0;
	return (a * b);
}

int		ft_op_divide(int a, int b, int *err)
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

int		ft_op_modulo(int a, int b, int *err)
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
