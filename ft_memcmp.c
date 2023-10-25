/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clira-ne <clira-ne@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 13:13:07 by clira-ne          #+#    #+#             */
/*   Updated: 2023/10/25 19:35:13 by clira-ne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t		i;
	const char	*c1;
	const char	*c2;

	i = 0;
	c1 = s1;
	c2 = s2;
	if (n == 0)
	{
		return (0);
	}
	while (i < n)
	{
		if (c1[i] > c2[i])
		{
			return (257);
		}
		if (c1[i] < c2[i])
		{
			return (-257);
		}
		i++;
	}
	return (0);
}
