/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchirk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/05 21:02:42 by jchirk            #+#    #+#             */
/*   Updated: 2018/08/08 16:32:38 by jchirk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char		*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		while (to_find[j] == str[i] && to_find[j] != '\0' && str[i] != '\0')
		{
			i++;
			j++;
			if (to_find[j] == '\0' && to_find[j - 1] == str[i - 1])
				return ((str + i - j));
		}
		i++;
	}
	return (NULL);
}
