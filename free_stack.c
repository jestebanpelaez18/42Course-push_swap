/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jestebanpelaez <jestebanpelaez@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 10:41:41 by jestebanpel       #+#    #+#             */
/*   Updated: 2023/03/12 10:59:52 by jestebanpel      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void free_stack(t_list **stack)
{
    t_list *current;

    if(!stack || !(*stack))
        return ;
    while((*stack)->next != NULL)
    {
        current = *stack;
        *stack = (*stack)->next;
        free(current);
    }
    *stack = NULL;
}