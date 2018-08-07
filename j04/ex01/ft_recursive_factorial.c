/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchirk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/03 14:30:49 by jchirk            #+#    #+#             */
/*   Updated: 2018/08/06 22:33:28 by jchirk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
{
	int ret;

	if (nb < 0 || nb > 12)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	else
	{
		ret = ft_recursive_factorial(nb - 1);
	}
	return (ret * nb);
}
