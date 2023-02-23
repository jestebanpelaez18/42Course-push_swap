/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_errors.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jestebanpelaez <jestebanpelaez@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 11:22:46 by jestebanpel       #+#    #+#             */
/*   Updated: 2023/02/23 12:07:57 by jestebanpel      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int is_number(char argument)
{
    if (argument >= '0' && argument <= '9')
        return(1);
    return(0); 
}

static int non_numeric_parameters(char *param)
{
    int i;

    i = 0;
    while (param[i] != '\0' )
    {
        if(!is_number(param[i]))
            return(0);
        i++;
    }
    return(1);
}

static int duplicate_parameter(char **arguments)
{
    int i;
    int j; 

    i = 1; 
    while (arguments[i] != NULL)
    {
        j = 1;
        while(arguments[j] != NULL)
        {
            if(i != j && ft_strcmp(arguments[i],arguments[j]) == 0)
                return(0);
            j++;
        }
        i++;
    }
    return(1);
}

static int check_max_values(char **arguments)
{
    long int temp;
    int i;

    i = 0;
    while(arguments[i] != NULL)
    {
        temp = ft_atoi(arguments[i]);
        if (temp == -2 || temp == -1)
            return(0);
        i++;        
    }
    return(1);
}

int check_parameters(char **argv)
{
    int i;

    i = 1;
    while(argv[i] != NULL)
    {
        if(!non_numeric_parameters(argv[i]))
            return(0);
        i++;
    }
    if (!duplicate_parameter(argv))
        return(0);
    if (!check_max_values(argv))
        return(0);
    return(1);
}