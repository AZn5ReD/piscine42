/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_wordtab.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchirk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/15 21:28:03 by jchirk            #+#    #+#             */
/*   Updated: 2018/08/16 13:47:06 by jchirk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char		**ft_split_whitespaces(char *str);

void		ft_swap_addresses(char **s1, char **s2)
{
	char *tmp;

	tmp = *s1;
	*s1 = *s2;
	*s2 = tmp;
}

void		ft_advanced_sort_wordtab(char **tab, int(*cmp)(char *, char *))
{
	int i;
	int size;

	i = 0;
	size = 0;
	while (tab[size] != 0)
		size++;
	while (i < size - 1)
	{
		if (cmp(tab[i], tab[i + 1]) > 0)
		{
			ft_swap_addresses(&tab[i], &tab[i + 1]);
			i = 0;
		}
		else
			i++;
	}
}
