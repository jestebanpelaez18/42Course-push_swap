/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpelaez- <jpelaez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 15:23:42 by jestebanpel       #+#    #+#             */
/*   Updated: 2023/03/20 23:16:25 by jpelaez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static t_list *fill_stack_a(char **arguments, int n_arg)
{
    t_list  *stack_a;
    int i;
    char    **temp;

    stack_a = NULL;
    i = 0;
    if(n_arg == 2)
        temp = ft_split(arguments[1],' ');
    else 
    {
        i = 1;
        temp = arguments;
    }
    while(temp[i])
    {   
        if (i == 1)
            stack_a = ft_lstnew(ft_atoi(arguments[i]));
        else
            ft_lstadd_back(&stack_a,ft_lstnew(ft_atoi(arguments[i])));
        i++;
    }
    if(n_arg == 2)
        free_argt(temp);
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
        return(0);
    if(!check_parameters(argv))
        error_msg("Error");
    stack_a = fill_stack_a(argv,argc);
    stack_b = NULL;
    if(is_sorted(stack_a) == 1)
    {
        free_stack(&stack_a);
        free_stack(&stack_b);
        exit(0);
    }
    index_stack(&stack_a, ft_lstsize(stack_a));
    push_swap(&stack_a, &stack_b, ft_lstsize(stack_a));
    free_stack(&stack_a);
    free_stack(&stack_b);
    return(0);
}
