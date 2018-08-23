/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_merge.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchirk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/21 11:43:31 by jchirk            #+#    #+#             */
/*   Updated: 2018/08/23 15:48:56 by jchirk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_merge(t_list **begin_list, t_list *begin_list2)
{
	t_list	*current;

	if (*begin_list == NULL)
		*begin_list = begin_list2;
	else
	{
		current = *begin_list;
		while (current->next != NULL)
			current = current->next;
		current->next = begin_list2;
	}
}
