/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clira-ne <clira-ne@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 07:46:21 by clira-ne          #+#    #+#             */
/*   Updated: 2023/10/17 10:00:30 by clira-ne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <string.h>
#include <stdio.h>

void	*ft_memset(void *s, int c, size_t n)
{
	int	i;

	i = 0;
	while (((char *)s)[i] != '\0' && i < n)
	{
		return ((char *)s);
	}
}

int main()
{
	printf("%s\n", ft_memset("abcdefg", 10, 10));
	printf("função original: %s\n", memset("abcdefg", 10, 10));
	return (0);
}
// função usada para preencher um bloco de memória com um valor específico
