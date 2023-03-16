/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lklst_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpelaez- <jpelaez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 19:21:02 by jestebanpel       #+#    #+#             */
/*   Updated: 2023/03/16 14:04:00 by jpelaez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*ft_lstnew(int fparam)
{
	t_list	*stack;

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
	while (current->next != NULL)
		current = current->next;
	return (current);
}

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;
	t_list	*bottom;

	last = *lst;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	bottom = ft_lstlast(last);
	bottom->next = new;
}

int is_sorted(t_list *stack)
{
	while (stack->next != NULL)
	{
		if (stack->value > stack->next->value)
			return(0);
		stack = stack->next;
	}
	return(1);
}

int	ft_lstsize(t_list *lst)
{
	t_list	*current;
	int		i;

	current = lst;
	i = 0;
	while (current != NULL)
	{
		current = current->next;
		i++;
	}
	return (i);
}