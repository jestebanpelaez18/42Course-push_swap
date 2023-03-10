/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_moves.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jestebanpelaez <jestebanpelaez@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 14:27:06 by jestebanpel       #+#    #+#             */
/*   Updated: 2023/03/10 21:23:30 by jestebanpel      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "push_swap.h"

static void push(t_list **to, t_list **from)
{
    t_list *temp;
    
    if(!*from)
        return ;
    temp = *from;
    *from = (*from)->next;
    temp->next = *to;
    *to = temp;
}

void pa(t_list **stack_a, t_list **stack_b)
{
    push(stack_a,stack_b);
    ft_putstr_fd("pa\n",1);
}

void pb(t_list **stack_a, t_list **stack_b)
{
    push(stack_b,stack_a);
    ft_putstr_fd("pb\n",1);
}