/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clira-ne <clira-ne@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 11:47:28 by clira-ne          #+#    #+#             */
/*   Updated: 2023/10/16 16:48:32 by clira-ne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"

#include <stdio.h>
#include <ctype.h>

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (2048);
	}
	return (0);
}

int main()
{
	printf("%d\n", ft_isdigit('8'));
	printf("função original: %d\n", isdigit('8'));
	return (0);
}

// verifica se um caractere é um dígito numérico
