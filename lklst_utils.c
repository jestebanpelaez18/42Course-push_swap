/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lklst_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jestebanpelaez <jestebanpelaez@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 19:21:02 by jestebanpel       #+#    #+#             */
/*   Updated: 2023/02/23 22:33:15 by jestebanpel      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*ft_lstnew(int fparam)
{
	t_list	*stack;

	stack= NULL;
	stack = (t_list *)malloc(sizeof(t_list));
	if (stack == NULL)
		return (NULL);
	stack->value = fparam;
	stack->next = NULL;
	return (stack);
}

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*current;

	current = lst;
	if (current == NULL)
		return (NULL);
	while (current->next != NULL)
		current = current->next;
	return (current);
}

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	last = *lst;
	if (*lst == NULL)
	{
		*lst = new;
	}
	else
	{
		ft_lstlast(last);
		last->next = new;
	}
}