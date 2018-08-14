/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rot42.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchirk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/09 20:46:15 by jchirk            #+#    #+#             */
/*   Updated: 2018/08/09 21:16:06 by jchirk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char		ft_rot(char s)
{
	if (s >= 'A' && s <= 'Z')
	{
		if (s <= 'J')
			return (s + 16);
		else
			return (s + 16 - 26);
	}
	else
	{
		if (s <= 'j')
			return (s + 16);
		else
			return (s + 16 - 26);
	}
	return (s);
}

char		*ft_rot42(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'A' && str[i] <= 'Z')
			|| (str[i] >= 'a' && str[i] <= 'z'))
			str[i] = ft_rot(str[i]);
		i++;
	}
	return (str);
}
