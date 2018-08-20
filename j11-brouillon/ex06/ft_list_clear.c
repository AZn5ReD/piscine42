/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchirk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/17 12:28:58 by jchirk            #+#    #+#             */
/*   Updated: 2018/08/20 16:44:11 by jchirk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void		ft_list_clear(t_list **begin_list)
{
	t_list	*next;
	t_list	*current;

	current = *begin_list;
	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
	*begin_list = NULL;

}
