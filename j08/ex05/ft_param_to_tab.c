/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchirk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/13 13:48:41 by jchirk            #+#    #+#             */
/*   Updated: 2018/08/14 11:25:29 by jchirk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

int					ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char				*ft_strdup(char *src)
{
	int		i;
	char	*str;

	i = 0;
	while (src[i] != 0)
		i++;
	str = (char*)malloc(sizeof(str) * (i + 1));
	if (str == NULL)
		return (NULL);
	i = 0;
	while (src[i] != '\0')
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

struct	s_stock_par	*ft_param_to_tab(int ac, char **av)
{
	int			i;
	t_stock_par	*par_tab;

	i = 0;
	if (!(par_tab = (t_stock_par*)malloc(sizeof(t_stock_par) * (ac + 1))))
		return (0);
	while (i < ac)
	{
		par_tab[i].size_param = ft_strlen(av[i]);
		par_tab[i].str = (*av + i);
		par_tab[i].copy = ft_strdup(av[i]);
		par_tab[i].tab = ft_split_whitespaces(av[i]);
		i++;
	}
	par_tab[i].str = 0;
	return (par_tab);
}
