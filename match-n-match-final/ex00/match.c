/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   match.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchirk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/11 11:00:58 by jchirk            #+#    #+#             */
/*   Updated: 2018/08/11 21:55:02 by jchirk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_match(char *s1, char *s2, int i, int j)
{
	if (s1[i] == '\0' && s2[j] == '\0')
		return (1);
	if (s2[j] == '*')
	{
		while (s1[i] != '\0')
		{
			if (ft_match(s1, s2, i, j + 1))
				return (1);
			i++;
		}
		return (ft_match(s1, s2, i, j + 1));
	}
	if (s1[i] != s2[j])
		return (0);
	else
		return (ft_match(s1, s2, i + 1, j + 1));
}

int		match(char *s1, char *s2)
{
	return (ft_match(s1, s2, 0, 0));
}
