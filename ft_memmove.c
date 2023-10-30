/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clira-ne <clira-ne@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 18:29:18 by clira-ne          #+#    #+#             */
/*   Updated: 2023/10/30 18:10:04 by clira-ne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	if (n == 0 || dest == src)
	{
		return (dest);
	}
	if (src > dest)
	{
		return (ft_memcpy(dest, src, n));
	}
	while (n--)
	{
		((unsigned char *)dest)[n] = ((const unsigned char *)src)[n];
	}
	return (dest);
}
