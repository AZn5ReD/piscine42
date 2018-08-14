/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchirk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/09 14:37:40 by jchirk            #+#    #+#             */
/*   Updated: 2018/08/13 20:26:24 by jchirk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_concat_into_str(char *str, int argc, char **argv)
{
	int i;
	int j;
	int k;

	i = 1;
	k = 0;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			str[k] = argv[i][j];
			k++;
			j++;
		}
		str[k] = '\n';
		k++;
		i++;
	}
	return (str);
}

char	*ft_concat_params(int argc, char **argv)
{
	int		i;
	int		j;
	int		size;
	char	*str;

	i = 1;
	size = 0;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
			j++;
		size = size + j + 1;
		i++;
	}
	str = (char*)malloc(sizeof(*str) * size);
	if (str == 0)
		return (str);
	return (ft_concat_into_str(str, argc, argv));
}
