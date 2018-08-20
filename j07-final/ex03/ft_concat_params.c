/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchirk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/09 14:37:40 by jchirk            #+#    #+#             */
/*   Updated: 2018/08/16 21:33:04 by jchirk           ###   ########.fr       */
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
		if (i < argc - 1)
			str[k] = '\n';
		k++;
		i++;
	}
	str[k] = '\0';
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
		size = size + j + 2;
		i++;
	}
	if (!(str = (char*)malloc(sizeof(*str) * size + 1)))
		return (0);
	return (ft_concat_into_str(str, argc, argv));
}

int main(int argc, char **argv)
{
	printf("%s\n", ft_concat_params(argc, argv));
}
