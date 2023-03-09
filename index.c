/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jestebanpelaez <jestebanpelaez@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 21:36:36 by jestebanpel       #+#    #+#             */
/*   Updated: 2023/03/08 20:33:58 by jestebanpel      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


static t_list *min(t_list **stack_a, int limit)
{
    t_list *temp;
    t_list *temp_min;
    int is_min;

    temp = *stack_a;
    temp_min = NULL;
    is_min = 2147483647;
    while (temp != NULL)
    {
        if(temp->value > limit && temp->value <= is_min)
        {
            is_min = temp->value;
            temp_min = temp;
        }
        temp = temp->next;
    }
    return(temp_min);
}

int get_max_index(t_list *stack)
{
    int max;
    t_list *temp;

    temp = stack;
    max = temp->index;
    while(temp != NULL)
    {
        if(temp->index > max)
            max = temp->index;
        temp = temp->next;
    }
    return(max);
}

void index_stack(t_list **stack_a, int size_stack)
{
    t_list *temp;
    int    limit;
    int i;

    i = 1;
    limit = -2147483648;
    temp = min(stack_a,limit);
    while(i < size_stack + 1)
    {
        limit = temp->value;
        temp->index = i;
        temp = min(stack_a,limit);
        i++;
    }
}