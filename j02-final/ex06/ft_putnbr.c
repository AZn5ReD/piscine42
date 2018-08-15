/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchirk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/02 13:21:17 by jchirk            #+#    #+#             */
/*   Updated: 2018/08/02 16:24:46 by jchirk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

int		ft_is_negative_k(int nb, int k)
{
	k = (nb < 0) ? '-' : ' ';
	return (k);
}

int		ft_is_negative_nb(int nb)
{
	if (nb < 0)
	{
		nb = nb * (-1);
	}
	return (nb);
}

void	ft_print(char tab[], int j)
{
	while (j >= 0)
	{
		ft_putchar(tab[j]);
		j--;
	}
}

void	ft_putnbr(int nb)
{
	int		i;
	int		j;
	char	k;
	char	c;
	char	tab[128];

	j = 0;
	k = ft_is_negative_k(nb, k);
	nb = ft_is_negative_nb(nb);
	while (nb > 0)
	{
		i = nb % 10;
		c = i + '0';
		tab[j] = c;
		nb /= 10;
		j++;
	}
	if (k == '-')
		tab[j] = '-';
	else
		j--;
	ft_print(tab, j);
}
