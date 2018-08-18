/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle00_3.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchirk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/18 22:42:24 by jchirk            #+#    #+#             */
/*   Updated: 2018/08/18 22:42:26 by jchirk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "colle02.h"

char		*first_line3(int x, char *str)
{
	int		i;

	i = 1;
	while (i <= x)
	{
		if (i == 1)
			str = ft_strcat(str, "A");
		else if (i == x && x != 1)
			str = ft_strcat(str, "C");
		else
			str = ft_strcat(str, "B");
		i++;
	}
	str = ft_strcat(str, "\n");
	return (str);
}

char		*last_line3(int x, char *str)
{
	int		i;

	i = 1;
	while (i <= x)
	{
		if (i == 1)
			str = ft_strcat(str, "A");
		else if (i == x && x != 1)
			str = ft_strcat(str, "C");
		else
			str = ft_strcat(str, "B");
		i++;
	}
	str = ft_strcat(str, "\n");
	return (str);
}

char		*center_line3(int x, char *str)
{
	int i;

	i = 1;
	while (i <= x)
	{
		if (i == 1)
			str = ft_strcat(str, "B");
		else if (i == x && x != 1)
			str = ft_strcat(str, "B");
		else
			str = ft_strcat(str, " ");
		i++;
	}
	str = ft_strcat(str, "\n");
	return (str);
}

char		*colle3(int x, int y)
{
	int		i;
	char	*str;

	i = 1;
	if (!(str = (char*)malloc(sizeof(char) * (((x + 1) * y) + 1))))
		return (0);
	str[(x + 1) * y] = '\0';
	while (i <= y)
	{
		if (i == 1)
			str = first_line3(x, str);
		else if (i == y && y != 1)
			str = last_line3(x, str);
		else
			str = center_line3(x, str);
		i++;
	}
	return (str);
}
