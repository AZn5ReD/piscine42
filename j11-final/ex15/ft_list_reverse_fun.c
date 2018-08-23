/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse_fun.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchirk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/21 15:07:07 by jchirk            #+#    #+#             */
/*   Updated: 2018/08/22 19:27:42 by jchirk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
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

int		ft_list_size(t_list *begin_list)
{
	int		size;
	t_list	*current;

	size = -1;
	current = begin_list;
	while (current != NULL)
	{
		size++;
		current = current->next;
	}
	return (size);
}

void	ft_list_reverse_fun(t_list *begin_list)
{
	int		i;
	int		size;
	t_list	*current;
	t_list	*rev;
	void	*tmp;

	i = 0;
	if (begin_list == NULL)
		return ;
	current = begin_list;
	size = ft_list_size(begin_list);
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
