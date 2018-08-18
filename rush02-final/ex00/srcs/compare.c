/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   compare.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchirk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/18 20:11:35 by jchirk            #+#    #+#             */
/*   Updated: 2018/08/18 22:43:43 by jchirk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "colle02.h"

int		ft_strcmp(char *s1, char *s2)
{
	int				i;
	unsigned char	c1;
	unsigned char	c2;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0')
		i++;
	c1 = s1[i];
	c2 = s2[i];
	return (c1 - c2);
}

void	ft_compare_colle(void)
{
	int		i;
	int		flag;
	int		largeur;
	int		hauteur;
	char	*str_read;

	i = 0;
	flag = 0;
	str_read = ft_read();
	largeur = ft_largeur(str_read);
	hauteur = ft_hauteur(str_read);
	while (i < 5)
	{
		if (ft_strcmp(g_ftab[i](largeur, hauteur), str_read) == 0)
		{
			ft_print_res(i, flag, largeur, hauteur);
			flag = 1;
		}
		i++;
	}
	if (flag != 1)
		ft_putstr("aucune");
	ft_putchar('\n');
}
