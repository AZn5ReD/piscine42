/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchirk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/18 20:04:23 by jchirk            #+#    #+#             */
/*   Updated: 2018/08/18 22:45:20 by jchirk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "colle02.h"

void	ft_realloc(char *buffer, int size)
{
	char	*temp;

	temp = ft_strdup(buffer);
	buffer = (char *)malloc(sizeof(char) * (size + 1));
	ft_strcpy(buffer, temp);
	free(temp);
}

char	*ft_read(void)
{
	int		ret;
	char	buf[2];
	char	*buffer;
	int		size;

	size = 1;
	buffer = (char *)malloc(sizeof(char) * (size));
	buffer[0] = '\0';
	while ((ret = read(0, buf, 1)))
	{
		buf[ret] = '\0';
		ft_realloc(buffer, size);
		ft_strcat(buffer, buf);
		size++;
	}
	return (buffer);
}
