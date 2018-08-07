/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchirk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/02 20:19:17 by jchirk            #+#    #+#             */
/*   Updated: 2018/08/02 20:59:37 by jchirk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		ft_swap(int *a, int *b)
{
	int a1;
	int b1;

	a1 = *a;
	b1 = *b;
	*a = b1;
	*b = a1;
}
