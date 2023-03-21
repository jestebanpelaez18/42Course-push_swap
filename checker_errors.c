/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_errors.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpelaez- <jpelaez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 11:22:46 by jestebanpel       #+#    #+#             */
/*   Updated: 2023/03/21 17:34:45 by jpelaez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	is_number(char argument)
{
	if (argument >= '0' && argument <= '9')
		return (1);
	return (0);
}

static int	non_numeric_parameters(char *param)
{
	int	i;

	i = 0;
	if ((param[i] == '-' || param[i] == '+') && param[i + 1] != '\0')
		i++;
	while (param[i] != '\0')
	{
		if (!is_number(param[i]))
			return (0);
		i++;
	}
	return (1);
}

static int	duplicate_parameter(char **arguments)
{
	int	i;
	int	j;

	i = 1;
	while (arguments[i] != NULL)
	{
		j = 1;
		while (arguments[j] != NULL)
		{
			if (i != j && ft_strcmp(arguments[i], arguments[j]) == 0)
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

static int	check_max_values(char **arguments)
{
	long int	temp;
	int			i;

	i = 0;
	while (arguments[i] != NULL)
	{
		temp = ft_atoi_2(arguments[i]);
		if (temp == 0)
			return (0);
		i++;
	}
	return (1);
}

int	check_parameters(char **argv, int n_argc)
{
	int		i;
	char	**temp;

	i = 0;
	if (n_argc == 2)
		temp = ft_split(argv[1], ' ');
	else
	{
		i = 1;
		temp = argv;
	}
	while (temp[i] != NULL)
	{
		if (!non_numeric_parameters(temp[i]))
			return (0);
		i++;
	}
	if (!duplicate_parameter(temp))
		return (0);
	if (!check_max_values(temp))
		return (0);
	if (n_argc == 2)
		free_argt(temp);
	return (1);
}
