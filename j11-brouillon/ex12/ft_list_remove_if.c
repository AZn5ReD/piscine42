/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchirk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/20 20:37:13 by jchirk            #+#    #+#             */
/*   Updated: 2018/08/20 21:57:28 by jchirk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list	*current;
	t_list	*remove;
	t_list	*previous;

	previous = NULL;
	current = *begin_list;
	while (current != NULL)
	{
		if (cmp(data_ref, current->data) == 0)
		{
			if (*begin_list == current)
				*begin_list = current->next;
			remove = current;
			previous->next = current->next;
			current = current->next;
			remove->next = NULL;
			free(remove);
		}
		else
		{
			previous = current;
			current = current->next;
		}
	}
}

int	ft_cmp(int a, int b)
{
	if (a == b)
		return (0);
	return (1);
}

int main()
{
	t_list	*list;

	list = ft_create_elem(1);
	list->next = ft_create_elem(2);
	list->next->next = ft_create_elem(3);
	printf("%d\n", list->data);
	printf("%d\n", list->next->data);
	printf("%d\n", list->next->next->data);
	ft_list_remove_if(&list, 1, &ft_cmp);
	printf("%d\n", list->data);
	printf("%d\n", list->next->data);
	printf("%d\n", list->next->next->data);
}
