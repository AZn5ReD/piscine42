/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_collatz_conjecture.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchirk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/10 09:35:50 by jchirk            #+#    #+#             */
/*   Updated: 2018/08/10 10:35:10 by jchirk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_collatz_conjecture(unsigned int base)
{
	unsigned int ret;

	if (base == 1)
		return (0);
	if (base % 2 == 0)
		ret = ft_collatz_conjecture(base / 2);
	else
		ret = ft_collatz_conjecture((base * 3) + 1);
	return (ret + 1);
}
