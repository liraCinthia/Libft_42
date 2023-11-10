/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clira-ne <clira-ne@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 13:13:07 by clira-ne          #+#    #+#             */
/*   Updated: 2023/11/09 15:02:08 by clira-ne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t		i;

	i = 0;
	if (n == 0)
	{
		return (0);
	}
	while (i < n)
	{
		if ((((const unsigned char *)s1)[i]) > (((const unsigned char *)s2)[i]))
		{
			return (257);
		}
		if ((((const unsigned char *)s1)[i]) < (((const unsigned char *)s2)[i]))
		{
			return (-257);
		}
		i++;
	}
	return (0);
}
