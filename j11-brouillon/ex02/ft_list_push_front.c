/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchirk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/16 18:38:40 by jchirk            #+#    #+#             */
/*   Updated: 2018/08/20 13:52:28 by jchirk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void		ft_list_push_front(t_list **begin_list, void *data)
{
	t_list	*first_elem;

	if (*begin_list == NULL)
	{
		first_elem = ft_create_elem(data);
		*begin_list = first_elem;
	}
	else
	{
		first_elem = ft_create_elem(data);
		first_elem->next = *begin_list;
		*begin_list = first_elem;
	}
}
