/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fonctions.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdchane <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/18 15:08:30 by mdchane           #+#    #+#             */
/*   Updated: 2018/08/18 22:44:18 by jchirk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "colle02.h"

char		*ft_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

char		*ft_strdup(char *src)
{
	int		i;
	char	*str;

	i = 0;
	while (src[i] != '\0')
		i++;
	str = (char*)malloc(sizeof(src) * (i + 1));
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

char		*ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int			ft_largeur(char *str)
{
	int i;
	int larg;

	larg = 0;
	i = 0;
	while (str[i] != '\n' && str[i] != '\0')
	{
		larg++;
		i++;
	}
	return (larg);
}

int			ft_hauteur(char *str)
{
	int i;
	int haut;

	haut = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '\n')
			haut++;
		i++;
	}
	return (haut);
}
