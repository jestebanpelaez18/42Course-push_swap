/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpelaez- <jpelaez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 15:23:42 by jestebanpel       #+#    #+#             */
/*   Updated: 2023/03/15 22:05:30 by jpelaez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static t_list *fill_stack_a(char **arguments)
{
    t_list  *stack_a;
    int i;

    stack_a = NULL;
    stack_a = ft_lstnew(ft_atoi(arguments[1]));
    i = 2;
    while(arguments[i] != NULL)
    {
        ft_lstadd_back(&stack_a,ft_lstnew(ft_atoi(arguments[i])));
        i++;
    }
    return(stack_a);
}


// void printList(t_list *node)
// {
//     // t_list *temp;

//     // temp = node;
//     while (node != NULL) 
//     {
//         printf("%d -> ", node->value);
//         node = node->next;
//     }
//     printf("NULL \n\n");
//     // while (temp != NULL) 
//     // {
//     //     printf("%d -> ", temp->index);
//     //     temp = temp->next;
//     // }
//     // printf("NULL \n");
// }

static void push_swap(t_list **stack_a, t_list **stack_b, int size_stack)
{
    if (size_stack <= 5)
        small_sort(stack_a, stack_b, size_stack);
    else
        big_sort(stack_a, stack_b, size_stack);
    return ;  
}

int main(int argc, char **argv)
{
    t_list  *stack_a;
    t_list  *stack_b;
    
    if (argc < 2)
        exit(0);
    if(!check_parameters(argv))
        error_msg("Error");
    stack_a = fill_stack_a(argv);
    if(is_sorted(stack_a) == 1)
    {
        free_stack(&stack_a);
        exit(0);
    }
    stack_b = NULL;
    index_stack(&stack_a, ft_lstsize(stack_a));
    push_swap(&stack_a, &stack_b, ft_lstsize(stack_a));
    // printList(stack_a);
    free_stack(&stack_a);
    free_stack(&stack_b);
    return(0);
}
