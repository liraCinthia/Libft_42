/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clira-ne <clira-ne@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 14:39:58 by clira-ne          #+#    #+#             */
/*   Updated: 2023/11/09 15:11:51 by clira-ne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	unsigned int	b;
	unsigned int	l;

	b = 0;
	l = 0;
	if (little[l] == '\0')
	{
		return ((char *)big);
	}
	while (big[b] != '\0' && b < len)
	{
		l = 0;
		while (big [b + l] == little[l] && little[l] && (b + l) < len)
		{
		l++;
		}
		if (little[l] == '\0')
		{
			return ((char *)&(big[b]));
		}
	b++;
	}
	return (NULL);
}
