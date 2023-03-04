/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jestebanpelaez <jestebanpelaez@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 19:13:20 by jestebanpel       #+#    #+#             */
/*   Updated: 2023/03/04 13:24:21 by jestebanpel      ###   ########.fr       */
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
int is_sorted(t_list *stack);
int	ft_lstsize(t_list *lst);

void	ft_putstr_fd(char *s, int fd);
void    ft_putchar_fd(char c, int fd);
void	ft_lstadd_back(t_list **lst, t_list *new);
void    index_stack(t_list **stack_a, int size_stack);
void    small_sort(t_list **stack_a, t_list **stack_b, int size_stack);
void    sa(t_list **stack_a);
void    sb(t_list **stack_b);
void    ss(t_list **stack_a, t_list **stack_b);


t_list	*ft_lstnew(int fparam);
t_list	*ft_lstlast(t_list *lst);

#endif

