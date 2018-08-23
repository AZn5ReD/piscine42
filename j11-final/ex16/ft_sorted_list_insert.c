/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted_list_insert.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchirk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/21 16:07:19 by jchirk            #+#    #+#             */
/*   Updated: 2018/08/23 18:28:44 by jchirk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_sorted_list_insert(t_list **begin_list, void *data, int (*cmp)())
{
	t_list *current;
	t_list *previous;
	t_list *new;

	previous = NULL;
	current = *begin_list;
	if (*begin_list == NULL)
		return ;
	new = ft_create_elem(data);
	if (current != NULL && cmp(current->data, data) >= 0)
	{
		new->next = current;
		*begin_list = new;
		return ;
	}
	while (current != NULL && cmp(current->data, data) < 0)
	{
		previous = current;
		current = current->next;
	}
	previous->next = new;
	if (current != NULL)
		new->next = current;
}
