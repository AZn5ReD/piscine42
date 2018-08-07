/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchirk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/04 13:00:57 by jchirk            #+#    #+#             */
/*   Updated: 2018/08/05 18:14:59 by jchirk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int ret;

	ret = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (nb == 0)
		return (0);
	while (power > 0)
	{
		ret = ret * nb;
		power--;
	}
	return (ret);
}
