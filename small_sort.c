/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jestebanpelaez <jestebanpelaez@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 21:42:06 by jestebanpel       #+#    #+#             */
/*   Updated: 2023/03/01 20:43:19 by jestebanpel      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void small_sort(t_list **stack_a, t_list **stack_b, int size_stack)
{
    if (size_stack == 2)
        sa(stack_a);
    else if (size_stack == 3)
        sort_for_3(stack_a, stack_b);
    else 
        return ;
}
