/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchirk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/06 12:32:56 by jchirk            #+#    #+#             */
/*   Updated: 2018/08/07 20:47:32 by jchirk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char		*ft_strcapitalize(char *str)
{
	int i;
	int j;

	i = 0;
	while (str[i] != '\0')
	{
		j = i;
		while ((str[i] >= '0' && str[i] <= '9')
				|| (str[i] >= 'A' && str[i] <= 'Z')
				|| (str[i] >= 'a' && str[i] <= 'z'))
		{
			if (str[i] >= 'a' && str[i] <= 'z' && i == j)
				str[i] = str[i] - 32;
			if (str[i] >= 'A' && str[i] <= 'Z' && i != j)
				str[i] = str[i] + 32;
			i++;
		}
		i++;
	}
	return (str);
}
