/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle00_1.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchirk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/18 22:42:02 by jchirk            #+#    #+#             */
/*   Updated: 2018/08/18 22:42:04 by jchirk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "colle02.h"

char		*first_line1(int x, char *str)
{
	int		i;

	i = 1;
	while (i <= x)
	{
		if (i == 1)
			str = ft_strcat(str, "/");
		else if (i == x && x != 1)
			str = ft_strcat(str, "\\");
		else
			str = ft_strcat(str, "*");
		i++;
	}
	str = ft_strcat(str, "\n");
	return (str);
}

char		*last_line1(int x, char *str)
{
	int		i;

	i = 1;
	while (i <= x)
	{
		if (i == 1)
			str = ft_strcat(str, "\\");
		else if (i == x && x != 1)
			str = ft_strcat(str, "/");
		else
			str = ft_strcat(str, "*");
		i++;
	}
	str = ft_strcat(str, "\n");
	return (str);
}

char		*center_line1(int x, char *str)
{
	int i;

	i = 1;
	while (i <= x)
	{
		if (i == 1)
			str = ft_strcat(str, "*");
		else if (i == x && x != 1)
			str = ft_strcat(str, "*");
		else
			str = ft_strcat(str, " ");
		i++;
	}
	str = ft_strcat(str, "\n");
	return (str);
}

char		*colle1(int x, int y)
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
			str = first_line1(x, str);
		else if (i == y && y != 1)
			str = last_line1(x, str);
		else
			str = center_line1(x, str);
		i++;
	}
	return (str);
}
