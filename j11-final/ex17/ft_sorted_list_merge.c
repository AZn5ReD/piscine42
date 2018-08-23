/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted_list_merge.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchirk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/21 17:36:27 by jchirk            #+#    #+#             */
/*   Updated: 2018/08/23 18:13:34 by jchirk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_merge(t_list **begin_list, t_list *begin_list2)
{
	t_list	*current;

	if (*begin_list == NULL)
		*begin_list = begin_list2;
	current = *begin_list;
	while (current->next != NULL)
		current = current->next;
	current->next = begin_list2;
}

void	ft_list_sort(t_list **begin_list, int (*cmp)())
{
	t_list	*current;
	void	*tmp;

	if (*begin_list == NULL)
		return ;
	current = *begin_list;
	while (current != NULL && current->next != NULL)
	{
		if (cmp(current->data, current->next->data) > 0)
		{
			tmp = current->data;
			current->data = current->next->data;
			current->next->data = tmp;
			current = *begin_list;
		}
		else
			current = current->next;
	}
}

void	ft_sorted_list_merge(t_list **begin_list1,
		t_list *begin_list2, int (*cmp)())
{
	ft_list_merge(begin_list1, begin_list2);
	ft_list_sort(begin_list1, cmp);
}
