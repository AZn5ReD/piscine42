/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchirk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/21 18:36:55 by jchirk            #+#    #+#             */
/*   Updated: 2018/08/22 15:22:39 by jchirk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "display_file.h"

void	ft_display_file(char *path)
{
	int		fd;
	char	buf[2];

	buf[1] = '\0';
	fd = open(path, O_RDONLY);
	if (fd == -1)
		return ;
	while (read(fd, buf, 1) > 0)
		ft_putstr(buf);
	close(fd);
}
