/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jestebanpelaez <jestebanpelaez@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 15:23:42 by jestebanpel       #+#    #+#             */
/*   Updated: 2023/02/23 20:10:29 by jestebanpel      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list *fill_stack_a(char **arguments)
{
    t_list  *stack_a;
    int i;

    stack_a = ft_lstnew(ft_atoi(arguments[1]));
    i = 2;
    while(arguments[i] != NULL)
    {
        
    }
}

int main(int argc, char **argv)
{
    t_list  *stack_a;
    t_list  *stack_b;
    
    if (argc < 2)
        return(1);
    if(!check_parameters(argv))
    {
        ft_putstr_fd("Error\n ", 1);
        return(0);
    }
    stack_a = fill_stack_a(argv);
    stack_b = NULL;
    return(0);
}