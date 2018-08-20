/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchirk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/16 19:13:23 by jchirk            #+#    #+#             */
/*   Updated: 2018/08/20 14:00:10 by jchirk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int		ft_list_size(t_list *begin_list)
{
	int		i;
	t_list	*current;

	i = 0;
	if (begin_list == NULL)
		return (i);
	current = begin_list;
	while (current != NULL)
	{
		current = current->next;
		i++;
	}
	return (i);
}
