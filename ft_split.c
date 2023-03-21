/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpelaez- <jpelaez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 20:32:47 by jpelaez-          #+#    #+#             */
/*   Updated: 2023/03/21 14:43:27 by jpelaez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*s2;
	size_t	i;
	size_t	j;
	size_t	space;

	if (s == NULL)
		return (0);
	i = start;
	space = start;
	j = 0;
	s2 = (char *)malloc(sizeof(char) * len + 1);
	if (start >= ft_strlen(s))
	{
		*s2 = '\0';
		return (s2);
	}
	if (s2 == NULL)
		return (0);
	while (s[i] != '\0' && i < len + space)
		s2[j++] = s[i++];
	s2[j] = '\0';
	return (s2);
}

static int	ft_numwords(char const *str, int c)
{
	int	i;
	int	delimiters;

	i = 0;
	delimiters = 0;
	while (str[i] != '\0')
	{
		if (str[i] != c)
		{
			delimiters++;
			while (str[i] != '\0' && str[i] != c)
				i++;
		}
		else
			i++;
	}
	return (delimiters);
}

static char	**ft_writesplit(char **s, char const *str, char c, int space)
{
	int	i;
	int	j;
	int	s_len;

	i = 0;
	j = 0;
	s_len = 0;
	while (str[i] != '\0' && j < space)
	{
		while (str[i] != '\0' && str[i] == c)
			i++;
		while (str[i] != '\0' && str[i] != c)
		{
			i++;
			s_len++;
		}
		s[j] = ft_substr(str, i - s_len, s_len);
		s_len = 0;
		j++;
	}
	s[j] = 0;
	return (s);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	int		len;

	if (s == NULL)
		return (0);
	len = ft_numwords(s, c);
	split = (char **)malloc(sizeof(char *) * (len + 1));
	if (split == NULL)
		return (0);
	ft_writesplit(split, s, c, len);
	return (split);
}
