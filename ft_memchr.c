/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clira-ne <clira-ne@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 15:20:40 by clira-ne          #+#    #+#             */
/*   Updated: 2023/10/31 19:30:52 by clira-ne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr;
	size_t			i;

	ptr = (unsigned char *)s;
	i = 0;
	if (n == 0)
	{
		return (NULL);
	}
	while (i < n)
	{
		if (ptr[i] == (unsigned char)c)
		{
			return (&((char *)s)[i]);
		}
		i++;
	}
	return (NULL);
}
