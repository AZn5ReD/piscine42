/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle00_0.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchirk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/18 22:41:36 by jchirk            #+#    #+#             */
/*   Updated: 2018/08/18 22:41:38 by jchirk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "colle02.h"

char		*first_line0(int x, char *str)
{
	int		i;

	i = 1;
	while (i <= x)
	{
		if (i == 1)
			str = ft_strcat(str, "o");
		else if (i == x && x != 1)
			str = ft_strcat(str, "o");
		else
			str = ft_strcat(str, "-");
		i++;
	}
	str = ft_strcat(str, "\n");
	return (str);
}

char		*last_line0(int x, char *str)
{
	int		i;

	i = 1;
	while (i <= x)
	{
		if (i == 1)
			str = ft_strcat(str, "o");
		else if (i == x && x != 1)
			str = ft_strcat(str, "o");
		else
			str = ft_strcat(str, "-");
		i++;
	}
	str = ft_strcat(str, "\n");
	return (str);
}

char		*center_line0(int x, char *str)
{
	int i;

	i = 1;
	while (i <= x)
	{
		if (i == 1)
			str = ft_strcat(str, "|");
		else if (i == x && x != 1)
			str = ft_strcat(str, "|");
		else
			str = ft_strcat(str, " ");
		i++;
	}
	str = ft_strcat(str, "\n");
	return (str);
}

char		*colle0(int x, int y)
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
			str = first_line0(x, str);
		else if (i == y && y != 1)
			str = last_line0(x, str);
		else
			str = center_line0(x, str);
		i++;
	}
	return (str);
}
