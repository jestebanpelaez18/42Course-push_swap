/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpelaez- <jpelaez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 21:42:06 by jestebanpel       #+#    #+#             */
/*   Updated: 2023/03/21 14:46:18 by jpelaez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	sort_for_3(t_list **stack)
{
	int	max;

	max = get_max_index((*stack));
	if ((*stack)->next->index == max)
		rra(stack);
	else if ((*stack)->index == max)
		ra(stack);
	if ((*stack)->index > (*stack)->next->index)
		sa(stack);
}

static void	sort_for_5(t_list **stack_a, t_list **stack_b, int size_stack)
{
	int	limit;

	limit = size_stack;
	while (limit > 0)
	{
		if ((*stack_a)->index == 1 || (*stack_a)->index == 2)
			pb(stack_a, stack_b);
		else
			ra(stack_a);
		limit--;
	}
	sort_for_3(stack_a);
	pa(stack_a, stack_b);
	pa(stack_a, stack_b);
	if ((*stack_a)->value > (*stack_a)->next->value)
		sa(stack_a);
}

void	small_sort(t_list **stack_a, t_list **stack_b, int size_stack)
{
	if (size_stack == 2)
		sa(stack_a);
	else if (size_stack == 3)
		sort_for_3(stack_a);
	else
		sort_for_5(stack_a, stack_b, size_stack);
	return ;
}
