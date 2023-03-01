/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_moves.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jestebanpelaez <jestebanpelaez@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 12:03:43 by jestebanpel       #+#    #+#             */
/*   Updated: 2023/03/01 20:20:34 by jestebanpel      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void swap(t_list *stack)
{
    int  temp;

    if(stack == NULL || stack->next == NULL)
        return ;
    temp = stack->value;
    stack->value = stack->next->value;
    stack->next->value = temp;    
}

void sa(t_list **stack_a)
{
    swap(*stack_a);
    ft_putstr_fd("sa\n",1);
}

void sb(t_list **stack_b)
{
    swap(*stack_b);
    ft_putstr_fd("sb\n",1);
}

void ss(t_list **stack_a, t_list **stack_b)
{
    swap(*stack_a);
    swap(*stack_b);
    ft_putstr_fd("ss\n",1);   
}