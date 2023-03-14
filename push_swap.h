/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpelaez- <jpelaez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 19:13:20 by jestebanpel       #+#    #+#             */
/*   Updated: 2023/03/13 23:10:38 by jpelaez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

typedef struct s_list
{
    int                     value;
    int                     index;
    struct s_list   *next;   
}                                   t_list;

int check_parameters(char **argv);
int	ft_strcmp(const char *str1, const char *str2);
int	ft_atoi(const char *number);
int	ft_atoi_2(const char *number);
int is_sorted(t_list *stack);
int	ft_lstsize(t_list *lst);
int get_max_index(t_list *stack);

void	ft_putstr_fd(char *s, int fd);
void    ft_putchar_fd(char c, int fd);
void	ft_lstadd_back(t_list **lst, t_list *new);
void    index_stack(t_list **stack_a, int size_stack);
void    small_sort(t_list **stack_a, t_list **stack_b, int size_stack);
void    big_sort(t_list **stack_a, t_list **stack_b, int size_stack);
void    sa(t_list **stack_a);
void    sb(t_list **stack_b);
void    ss(t_list **stack_a, t_list **stack_b);
void    rra(t_list **stack_a);
void    rrb(t_list **stack_b);
void    rrr(t_list **stack_a, t_list **stack_b);
void    ra(t_list **stack_a);
void    rb(t_list **stack_b);
void    rr(t_list **stack_a, t_list **stack_b);
void    pa(t_list **stack_a, t_list **stack_b);
void    pb(t_list **stack_a, t_list **stack_b);
void    free_stack(t_list **stack);

t_list	*ft_lstnew(int fparam);
t_list	*ft_lstlast(t_list *lst);

#endif

