/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   affichage.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdchane <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/18 15:27:32 by mdchane           #+#    #+#             */
/*   Updated: 2018/08/18 22:15:42 by jchirk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "colle02.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_putnbr(int nb)
{
	unsigned int	nbr;
	int				size;

	size = 1;
	if (nb < 0)
	{
		nb = -nb;
		ft_putchar('-');
	}
	nbr = nb;
	while ((nbr / 10) > 0)
	{
		nbr /= 10;
		size *= 10;
	}
	nbr = nb;
	while (size)
	{
		ft_putchar((nbr / size + 48));
		nbr %= size;
		size /= 10;
	}
}

void	ft_print_res(int colle, int flag, int largeur, int hauteur)
{
	if (flag == 1)
		ft_putstr(" || ");
	ft_putstr("[colle-0");
	ft_putnbr(colle);
	ft_putstr("] [");
	ft_putnbr(largeur);
	ft_putstr("] [");
	ft_putnbr(hauteur);
	ft_putstr("]");
}
