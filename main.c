/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jestebanpelaez <jestebanpelaez@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 15:23:42 by jestebanpel       #+#    #+#             */
/*   Updated: 2023/02/23 11:00:04 by jestebanpel      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int argc, char **argv)
{
    // t_list  *stack_a;
    // t_list  *stack_b;
    if (argc < 2)
        return(1);
    if(!check_parameters(argv))
    {
        ft_putstr_fd("Error\n ", 1);
        return(0);
    }
    ft_putstr_fd("OK\n", 1);
    return(0);
}