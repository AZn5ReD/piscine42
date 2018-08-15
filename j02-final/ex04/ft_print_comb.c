/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchirk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/01 18:17:31 by jchirk            #+#    #+#             */
/*   Updated: 2018/08/02 10:54:52 by jchirk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_print(char a, char b, char c)
{
	if (a != b && a != c && b != c)
	{
		ft_putchar(a);
		ft_putchar(b);
		ft_putchar(c);
		if (a == '7' && b == '8' && c == '9')
		{
		}
		else
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
	}
}

void	ft_print_comb(void)
{
	char tab[3];

	tab[0] = '0';
	while (tab[0] <= '7')
	{
		tab[1] = tab[0] + 1;
		while (tab[1] <= '8')
		{
			tab[2] = tab[1] + 1;
			while (tab[2] <= '9')
			{
				ft_print(tab[0], tab[1], tab[2]);
				tab[2]++;
			}
			tab[1]++;
		}
		tab[0]++;
	}
}
