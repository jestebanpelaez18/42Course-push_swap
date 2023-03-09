/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jestebanpelaez <jestebanpelaez@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 21:42:06 by jestebanpel       #+#    #+#             */
/*   Updated: 2023/03/09 14:15:07 by jestebanpel      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void sort_for_3(t_list **stack)
{
    int max;

    max = get_max_index((*stack));
    if((*stack)->next->index == max)
        rra(stack);
    else if((*stack)->index == max)
        ra(stack);
    if((*stack)->index > (*stack)->next->index)
        sa(stack);   
}

void small_sort(t_list **stack_a, int size_stack)
{
    if (size_stack == 2)
        sa(stack_a);
    else if (size_stack == 3)
        sort_for_3(stack_a);
    else 
        return ;
}
