/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchirk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/05 16:53:57 by jchirk            #+#    #+#             */
/*   Updated: 2018/08/07 17:35:27 by jchirk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_putchar(char c);

void		ft_print(char *str, int i)
{
	while (i >= 0)
	{
		ft_putchar(str[i]);
		i--;
	}
}

void		ft_putnbr(int nb)
{
	int		i;
	char	str[11];

	i = 0;
	if (nb < 0)
	{
		ft_putchar('-');
	}
	while (nb != 0)
	{
		str[i] = (nb < 0) ? (nb % 10) * (-1) + '0' : (nb % 10) + '0';
		nb /= 10;
		i++;
	}
	i--;
	ft_print(str, i);
}
