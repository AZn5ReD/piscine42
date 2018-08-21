/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse_fun.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchirk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/21 15:07:07 by jchirk            #+#    #+#             */
/*   Updated: 2018/08/21 15:58:30 by jchirk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	int		i;
	t_list	*current;

	i = 0;
	current = begin_list;
	while (current != NULL)
	{
		current = current->next;
		if (i == (nbr - 1))
			return (current);
		i++;
	}
	return (NULL);
}

void	ft_list_reverse_fun(t_list *begin_list)
{
	int		i;
	int		size;
	t_list	*current;
	t_list	*rev;
	void	*tmp;

	i = 1;
	size = 0;
	current = begin_list;
	while (current->next != NULL)
	{
		size++;
		current = current->next;
	}
	current = begin_list;
	while (i <= size)
	{
		tmp = current->data;
		rev = ft_list_at(begin_list, size--);
		current->data = rev->data;
		rev->data = tmp;
		current = current->next;
		i++;
	}
}
