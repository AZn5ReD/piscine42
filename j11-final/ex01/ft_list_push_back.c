/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchirk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/16 17:27:55 by jchirk            #+#    #+#             */
/*   Updated: 2018/08/21 15:59:27 by jchirk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void		ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*last_elem;
	t_list	*current;

	if (*begin_list == NULL)
	{
		last_elem = ft_create_elem(data);
		*begin_list = last_elem;
	}
	else
	{
		current = *begin_list;
		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = ft_create_elem(data);
	}
}
