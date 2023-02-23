/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jestebanpelaez <jestebanpelaez@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 19:13:20 by jestebanpel       #+#    #+#             */
/*   Updated: 2023/02/23 11:55:20 by jestebanpel      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>

typedef struct      s_list
{
    void            *content;
    struct s_list   *next;   
}                   t_list;

int check_parameters(char **argv);
int	ft_strcmp(const char *str1, const char *str2);
int	ft_atoi(const char *number);

void	ft_putstr_fd(char *s, int fd);
void    ft_putchar_fd(char c, int fd);
#endif

