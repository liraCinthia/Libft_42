/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clira-ne <clira-ne@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 14:21:41 by clira-ne          #+#    #+#             */
/*   Updated: 2023/10/31 19:47:36 by clira-ne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	dst_leng;
	size_t	src_leng;

	i = 0;
	j = 0;
	dst_leng = ft_strlen(dst);
	j = dst_leng;
	src_leng = ft_strlen(src);
	if (dst_leng >= size)
	{
		return (size + src_leng);
	}
	while (src[i] != '\0' && i < (size - dst_leng - 1))
	{
		dst[j] = src[i];
		i++;
		j++;
	}
	dst[i + dst_leng] = '\0';
	return (dst_leng + src_leng);
}
