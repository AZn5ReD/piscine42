/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchirk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/09 15:23:20 by jchirk            #+#    #+#             */
/*   Updated: 2018/08/14 11:01:58 by jchirk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_count_words(char *str)
{
	int		i;
	int		nb;
	int		in_word;

	i = 0;
	nb = 0;
	in_word = 0;
	while (str[i] != '\0')
	{
		if (str[i] != ' ' && str[i] != '\t' && str[i] != '\n' && str[i] != '\0')
			in_word = 1;
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == '\0')
		{
			if (in_word == 1)
			{
				in_word = 0;
				nb++;
			}
		}
		i++;
	}
	if (in_word == 1)
		nb++;
	return (nb);
}

char	**ft_count_char_alloc(char *str, char **tab)
{
	int i;
	int place;
	int nb_char;

	i = 0;
	place = 0;
	nb_char = 0;
	while (str[i] != '\0')
	{
		if (str[i] != ' ' && str[i] != '\t' && str[i] != '\n' && str[i] != '\0')
			nb_char++;
		else
		{
			if (nb_char != 0)
			{
				tab[place] = (char*)malloc((nb_char + 1) * sizeof(char));
				place++;
			}
			nb_char = 0;
		}
		i++;
	}
	if (nb_char != 0)
		tab[place] = (char*)malloc((nb_char + 1) * sizeof(char));
	return (tab);
}

char	**ft_fill_tab(char *str, char **tab)
{
	int i;
	int j;
	int place;

	i = 0;
	j = 0;
	place = 0;
	while (str[i] != '\0')
	{
		if (str[i] != ' ' && str[i] != '\t' && str[i] != '\n' && str[i] != '\0')
		{
			tab[place][j++] = str[i];
		}
		i++;
		if (i != 0 && (str[i - 1] != ' ' && str[i - 1] != '\t' &&
			str[i - 1] != '\n' && str[i - 1] != '\0') && (str[i] == ' ' ||
			str[i] == '\t' || str[i] == '\n' || str[i] == '\0'))
		{
			tab[place++][j] = '\0';
			j = 0;
		}
	}
	return (tab);
}

char	**ft_split_whitespaces(char *str)
{
	int		i;
	int		size;
	char	**tab;

	i = 0;
	size = ft_count_words(str);
	tab = (char**)malloc((size + 1) * sizeof(*tab));
	if (tab == NULL)
		return (NULL);
	tab[size] = (char*)malloc(sizeof(char));
	if (tab[size] == NULL)
		return (NULL);
	tab[size] = 0;
	tab = ft_count_char_alloc(str, tab);
	tab = ft_fill_tab(str, tab);
	return (tab);
}
