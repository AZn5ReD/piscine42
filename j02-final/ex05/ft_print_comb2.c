/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchirk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/02 11:00:25 by jchirk            #+#    #+#             */
/*   Updated: 2018/08/02 13:16:40 by jchirk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_print(int a1, int a2, int b1, int b2)
{
	ft_putchar(a1);
	ft_putchar(a2);
	ft_putchar(' ');
	ft_putchar(b1);
	ft_putchar(b2);
	if (!(a1 == '9' && a2 == '8'))
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb2(void)
{
	char tab[4];

	tab[0] = '0';
	while (tab[0] <= '9')
	{
		tab[1] = '0';
		while (tab[1] <= '9')
		{
			tab[2] = tab[0];
			while (tab[2] <= '9')
			{
				tab[3] = (tab[2] == tab[0]) ? (tab[1] + 1) : '0';
				while (tab[3] <= '9')
				{
					ft_print(tab[0], tab[1], tab[2], tab[3]);
					tab[3]++;
				}
				tab[2]++;
			}
			tab[1]++;
		}
		tab[0]++;
	}
}
