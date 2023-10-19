/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clira-ne <clira-ne@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 17:11:31 by clira-ne          #+#    #+#             */
/*   Updated: 2023/10/19 20:11:39 by clira-ne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <bsd/string.h> //se atentar a essa biblioteca e para compilar usar a flag -lbsd
#include <stdio.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	int	i;

	i = 0;
	while (src[i] != '\0' && i < size - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (i);
}
int main()
{
        char  origem[7] = "hello";
        char  destino[7];
        printf("%zu\n", ft_strlcpy(destino, origem, 8));
		printf("função original: %zu\n", strlcpy(destino, origem, 8));
        return (0);
}
//o size é em relação ao tamanho do dest, o ideal é armazenar conforme o tamanho do dest
