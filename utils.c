/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpelaez- <jpelaez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 11:39:12 by jestebanpel       #+#    #+#             */
/*   Updated: 2023/03/24 14:52:57 by jpelaez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_strcmp(const char *str1, const char *str2)
{
	size_t	i;

	i = 0;
	while ((str1[i] != '\0' && str2[i] != '\0') && str1[i] == str2[i])
		i++;
	return ((unsigned char)str1[i] - (unsigned char)str2[i]);
}

int	ft_atoi_2(const char *number)
{
	int			i;
	int			sing;
	int long	result;

	i = 0;
	sing = 1;
	result = 0;
	while ((number[i] >= 9 && number[i] <= 13) || number[i] == 32)
		i++;
	if (number[i] == '+' || number[i] == '-')
	{
		if (number[i] == '-')
			sing = -1;
		i++;
	}
	while (number[i] >= '0' && number[i] <= '9')
	{
		result = result * 10 + (number[i] - '0');
		if (result > 2147483648 && sing == -1)
			return (0);
		else if (result > 2147483647 && sing == 1)
			return (0);
		i++;
	}
	return (1);
}
