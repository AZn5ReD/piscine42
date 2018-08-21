/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted_list_merge.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchirk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/21 17:36:27 by jchirk            #+#    #+#             */
/*   Updated: 2018/08/21 17:58:17 by jchirk           ###   ########.fr       */
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

void	ft_sorted_list_merge(t_list **begin_list1,
		t_list *begin_list2, int (*cmp)())
{
	t_list	*current;

	current = begin_list2;
	while (current != NULL)
	{
		ft_sorted_list_insert(begin_list1, current->data, cmp);
		current = current->next;
	}
}
