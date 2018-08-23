/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchirk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/17 16:21:04 by jchirk            #+#    #+#             */
/*   Updated: 2018/08/22 19:20:17 by jchirk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list		*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	unsigned int	i;
	t_list			*current;

	i = 0;
	current = begin_list;
	while (current != NULL)
	{
		if (i == nbr)
			return (current);
		current = current->next;
		i++;
	}
	return (NULL);
}
