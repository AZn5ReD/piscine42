/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchirk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/16 21:19:56 by jchirk            #+#    #+#             */
/*   Updated: 2018/08/23 17:56:59 by jchirk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list		*ft_list_push_params(int ac, char **av)
{
	int		i;
	t_list	*list;
	t_list	*current;

	i = 0;
	list = NULL;
	if (ac <= 0)
		return (NULL);
	while (i < ac)
	{
		current = ft_create_elem(av[i]);
		current->next = list;
		list = current;
		i++;
	}
	return (list);
}
