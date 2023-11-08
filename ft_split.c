/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clira-ne <clira-ne@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 13:51:17 by clira-ne          #+#    #+#             */
/*   Updated: 2023/11/08 20:21:41 by clira-ne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_string(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i] && s[i] != c)
			count++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (count);
}

static int	clear_memory(char **matrix)
{
	int	i;

	i = 0;
	while (matrix[i])
	{
		free(matrix[i]);
		i++;
	}
	free(matrix);
	return (1);
}

static int	ft_count_for_string_matrix(char const *s, char c, char **matrix)
{
	int	i;
	int	m;
	int	len;

	i = 0;
	m = 0;
	while (s[i])
	{
		len = 0;
		while (s[i] && s[i] == c)
			i++;
		while (s[i] && s[i] != c)
		{
			i++;
			len++;
		}
		if (len != 0)
		{
			matrix[m] = (char *)ft_calloc(len + 1, sizeof(char));
			if (!matrix[m])
				return (clear_memory(matrix));
		}
		m++;
	}
	return (0);
}

static void	fill_characters_string(char const *s, char c, char **matrix)
{
	int	i;
	int	m;
	int	c_s;

	i = 0;
	m = 0;
	while (matrix[m])
	{
		c_s = 0;
		while (s[i] && s[i] == c)
			i++;
		while (s[i] && s[i] != c)
		{
			matrix[m][c_s] = s[i];
			i++;
			c_s++;
		}
		m++;
	}
}

char	**ft_split(char const *s, char c)
{
	char	**matrix_string;

	matrix_string = (char **)
		ft_calloc(ft_count_string(s, c) + 1, sizeof(char *));
	if (!matrix_string)
		return (NULL);
	if (ft_count_for_string_matrix(s, c, matrix_string) == 1)
		return (NULL);
	fill_characters_string(s, c, matrix_string);
	return (matrix_string);
}
