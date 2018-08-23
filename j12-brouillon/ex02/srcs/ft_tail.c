/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tail.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchirk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/22 16:11:31 by jchirk            #+#    #+#             */
/*   Updated: 2018/08/23 17:15:08 by jchirk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_tail.h"

void	ft_display_header(char *path)
{
	ft_putstr("==> ");
	ft_putstr(path);
	ft_putstr(" <==");
	ft_putchar('\n');
}

void	ft_display_file(char *path)
{
	int		fd;
	int		errno;
	char	buf[2];

	errno = 0;
	buf[1] = '\0';
	fd = open(path, O_RDONLY);
	if (fd == -1)
	{
		return ;
	}
	while (read(fd, buf, 1) > 0)
		ft_putstr(buf);
	{
		return ;
	}
	close(fd);
}

void	ft_print_files(int argc, char **argv)
{
	int i;

	i = 1;
	if (argc == 2)
		ft_display_file(argv[i]);
	else
	{
		while (i <= argc - 1)
		{
			ft_display_header(argv[i]);
			ft_display_file(argv[i]);
			ft_putchar('\n');
			i++;
		}
	}
}
