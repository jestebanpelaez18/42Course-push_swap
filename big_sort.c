/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpelaez- <jpelaez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 17:15:42 by jestebanpel       #+#    #+#             */
/*   Updated: 2023/03/21 14:42:42 by jpelaez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	big_sort(t_list **stack_a, t_list **stack_b, int size_stack)
{
	int		i;
	int		bit;
	t_list	*temp;

	bit = 0;
	while (bit < 32)
	{
		i = 0;
		temp = *stack_a;
		while (i < size_stack)
		{
			if (((temp->index >> bit) & 1) == 0)
				pb(stack_a, stack_b);
			else
				ra(stack_a);
			temp = *stack_a;
			i++;
		}
		while (*stack_b != NULL)
			pa(stack_a, stack_b);
		bit++;
		if (is_sorted((*stack_a)) == 1)
			return ;
	}
}
