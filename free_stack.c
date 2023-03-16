/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpelaez- <jpelaez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 10:41:41 by jestebanpel       #+#    #+#             */
/*   Updated: 2023/03/15 22:04:50 by jpelaez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void free_stack(t_list **stack)
{
    t_list *current;

    if(!stack || !(*stack))
        return ;
    while((*stack)->next != NULL)
    {
        current = *stack;
        *stack = (*stack)->next;
        free(current);
    }
    *stack = NULL;
}

static void	ft_putendl_fd(char *s, int fd)
{
	size_t	i;

	i = 0;
	if (s == NULL)
		return ;
	while (s[i] != '\0')
	{
		ft_putchar_fd(s[i], fd);
		i++;
	}
	write(fd, "\n", 1);
}

void error_msg(char *msg)
{
    ft_putendl_fd(msg,2);
    exit(0);
}
