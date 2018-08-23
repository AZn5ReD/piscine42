/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchirk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/21 11:47:31 by jchirk            #+#    #+#             */
/*   Updated: 2018/08/22 18:51:30 by jchirk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

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
