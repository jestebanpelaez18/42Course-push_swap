/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jestebanpelaez <jestebanpelaez@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 17:15:42 by jestebanpel       #+#    #+#             */
/*   Updated: 2023/03/11 20:29:27 by jestebanpel      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "push_swap.h"

void big_sort(t_list **stack_a, t_list **stack_b, int size_stack)
{
    int i;
    int bit;
    t_list  *temp;

    bit = 0;
    while(bit<32)
    {
        i = 0;
        temp = *stack_a;
        while(i < size_stack)
        {
            if(((temp->index >> i) & 1) == 0)
                pb(stack_a,stack_b);
            else 
                ra(stack_a); 
            temp = *stack_a;
            i++;
        }
        
    }
}