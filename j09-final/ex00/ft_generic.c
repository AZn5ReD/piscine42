/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_generic.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchirk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/09 16:51:16 by jchirk            #+#    #+#             */
/*   Updated: 2018/08/09 16:55:18 by jchirk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

void		ft_generic(void)
{
	ft_putchar('T');
	ft_putchar('u');
	ft_putchar('t');
	ft_putchar(' ');
	ft_putchar('t');
	ft_putchar('u');
	ft_putchar('t');
	ft_putchar(' ');
	ft_putchar(';');
	ft_putchar(' ');
	ft_putchar('T');
	ft_putchar('u');
	ft_putchar('t');
	ft_putchar(' ');
	ft_putchar('t');
	ft_putchar('u');
	ft_putchar('t');
	ft_putchar('\n');
}
