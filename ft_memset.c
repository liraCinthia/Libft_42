/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clira-ne <clira-ne@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 15:47:12 by clira-ne          #+#    #+#             */
/*   Updated: 2023/10/18 21:15:52 by clira-ne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <string.h>
#include <stdio.h>

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*p;
	unsigned char	v;

	i = 0;
	p = s;
	v = c;
	while (i < n)
	{
		p[i] = v;
		i++;
	}
	return (p);
}

// int	main(void)
// {
//    char str[50] = "a bianca e perfeita";

// //	ft_memset (str, 'a', 7);
// 	memset(str, 'a', 7);
// 	printf("função original: %s\n", str);

//    return(0);
// }
