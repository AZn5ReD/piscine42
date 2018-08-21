/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchirk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/20 20:37:13 by jchirk            #+#    #+#             */
/*   Updated: 2018/08/21 11:38:39 by jchirk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list	*current;
	t_list	*remove;

	current = *begin_list;
	while (current != NULL && current->next != NULL)
	{
		if (cmp(data_ref, current->next->data) == 0)
		{
			remove = current->next;
			current->next = current->next->next;
			free(remove);
		}
		else
			current = current->next;
	}
	remove = *begin_list;
	if (cmp(data_ref, remove->data) == 0)
	{
		*begin_list = remove->next;
		free(remove);
	}
}
