/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_active_bits.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchirk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/10 11:37:29 by jchirk            #+#    #+#             */
/*   Updated: 2018/08/10 12:00:28 by jchirk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>

unsigned int	ft_active_bits(int value)
{
	int				i;
	int				ret;
	int				tab[32];

	i = 1;
	ret = 0;
	if (value == 0)
		return (0);
	tab[0] = (value < 0) ? 1 : 0;
	while (value != 0)
	{
		tab[i] = value % 2;
		value = value / 2;
		i++;
	}
	i--;
	while (i >= 0)
	{
		if (tab[i] != 0)
			ret++;
		i--;
	}
	return (ret);
}
