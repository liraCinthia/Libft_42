/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clira-ne <clira-ne@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 14:21:41 by clira-ne          #+#    #+#             */
/*   Updated: 2023/10/23 18:18:12 by clira-ne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	int		dst_leng;
	int		src_leng;

	i = 0;
	dst_leng = ft_strlen(dst);
	src_leng = ft_strlen(src);
	while (src[i] != '\0' && i < (size - dst_leng - 1))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i + dst_leng] = '\0';
	return (dst_leng + src_leng);
}
