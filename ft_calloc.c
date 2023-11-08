/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clira-ne <clira-ne@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 17:20:51 by clira-ne          #+#    #+#             */
/*   Updated: 2023/11/07 13:20:39 by clira-ne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*p;
	size_t	len_expec;

	len_expec = nmemb * size;
	if (nmemb && size && len_expec / nmemb != size)
		return (NULL);
	p = malloc(len_expec);
	if (p == NULL)
	{
		return (NULL);
	}
	ft_bzero(p, len_expec);
	return (p);
}
