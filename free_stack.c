/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpelaez- <jpelaez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 10:41:41 by jestebanpel       #+#    #+#             */
/*   Updated: 2023/03/23 15:43:49 by jpelaez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_stack(t_list **stack)
{
	t_list	*current;

	if (!stack || !(*stack))
		return ;
	while ((*stack))
	{
		current = *stack;
		*stack = (*stack)->next;
		free(current);
	}
}

void	free_argt(char **argument)
{
	int	i;

	i = 0;
	while (argument[i])
	{
		free(argument[i]);
		argument[i] = NULL;
		i++;
	}
	free(argument);
}

void	error_msg(char *msg)
{
	ft_putendl_fd(msg, 2);
	exit(0);
}
