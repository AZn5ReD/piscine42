/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_integer_table.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchirk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/03 13:35:56 by jchirk            #+#    #+#             */
/*   Updated: 2018/08/03 13:52:51 by jchirk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		ft_sort_integer_table(int *tab, int size)
{
	int	i;
	int	tmp;
	int	flag;

	i = 0;
	flag = 0;
	while (i < size - 1)
	{
		if (tab[i] > tab[i + 1])
		{
			tmp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = tmp;
			flag = 1;
		}
		i++;
	}
	if (flag == 1)
	{
		ft_sort_integer_table(tab, size);
	}
}
