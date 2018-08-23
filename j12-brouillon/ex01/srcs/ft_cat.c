/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchirk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/21 19:57:27 by jchirk            #+#    #+#             */
/*   Updated: 2018/08/22 15:21:44 by jchirk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_cat.h"

void	ft_print_invalid(char *path)
{
	ft_putstr("cat: ");
	ft_putstr(path);
	ft_putstr(": No such file or directory\n");
}

void	ft_print_dir(char *path)
{
	ft_putstr("cat: ");
	ft_putstr(path);
	ft_putstr(": Is a directory\n");
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
		if (errno == 2)
			ft_print_invalid(path);
		return ;
	}
	while (read(fd, buf, 1) > 0)
		ft_putstr(buf);
	{
		if (errno == 21)
			ft_print_dir(path);
		return ;
	}
	close(fd);
}

void	ft_print_files(int argc, char **argv)
{
	int i;

	i = 1;
	while (i <= argc - 1)
	{
		ft_display_file(argv[i]);
		i++;
	}
}
