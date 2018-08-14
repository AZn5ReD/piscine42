/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchirk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/10 09:49:25 by jchirk            #+#    #+#             */
/*   Updated: 2018/08/10 10:35:44 by jchirk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write_alert(void)
{
	write(1, "Alert!!!\n", 9);
}

char	ft_to_lowercase(char c)
{
	char ret;

	if (c >= 'A' && c <= 'Z')
		ret = c + 32;
	else
		ret = c;
	return (ret);
}

int		ft_strstr(char *str, char *to_find)
{
	int		i;
	int		j;

	i = 0;
	if (to_find[0] == '\0')
		return (0);
	while (str[i] != '\0')
	{
		while (str[i] == '\t' || str[i] == '\n' || str[i] == '\v' ||
				str[i] == '\f' || str[i] == '\r' || str[i] == ' ')
			i++;
		j = 0;
		if (to_find[j] != str[i + j])
			return (0);
		while (to_find[j] == str[i + j])
		{
			j++;
			if (to_find[j] != str[i + j])
				return (0);
			if (to_find[j] == '\0')
				return (1);
		}
		i++;
	}
	return (0);
}

void	ft_scan(int argc, char **argv)
{
	int i;
	int ret;

	i = 1;
	while (i < argc)
	{
		ret = 0;
		ret += ft_strstr(argv[i], "president");
		ret += ft_strstr(argv[i], "attack");
		ret += ft_strstr(argv[i], "bauer");
		if (ret != 0)
			ft_write_alert();
		i++;
	}
}

int		main(int argc, char **argv)
{
	int i;
	int j;

	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			argv[i][j] = ft_to_lowercase(argv[i][j]);
			j++;
		}
		i++;
	}
	ft_scan(argc, argv);
	return (0);
}
