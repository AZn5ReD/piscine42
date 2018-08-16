/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_wordtab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchirk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/15 19:46:41 by jchirk            #+#    #+#             */
/*   Updated: 2018/08/16 16:20:12 by jchirk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	**ft_split_whitespaces(char *str);

int		ft_strcmp(char *s1, char *s2)
{
	int				i;
	unsigned int	c1;
	unsigned int	c2;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		i++;
	c1 = s1[i];
	c2 = s2[i];
	return (c1 - c2);
}

void	ft_sort_wordtab(char **tab)
{
	int		i;
	int		size;
	char	**tmp;

	i = 0;
	size = 0;
	while (tab[size] != 0)
		size++;
	while (i < size - 1)
	{
		printf("i = %d\n", i);
		if (ft_strcmp(tab[i], tab[i + 1]) > 0)
		{
			tmp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = tmp;
			i = 0;
		}
		else
			i++;
	}
}
