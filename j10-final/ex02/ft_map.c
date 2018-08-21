/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchirk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/14 16:44:06 by jchirk            #+#    #+#             */
/*   Updated: 2018/08/20 15:41:38 by jchirk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int i;
	int *ret_tab;

	i = 0;
	if (!(ret_tab = (int*)malloc(sizeof(ret_tab) * length)))
		return (NULL);
	while (i < length)
	{
		ret_tab[i] = f(tab[i]);
		i++;
	}
	return (ret_tab);
}
