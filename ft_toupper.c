/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clira-ne <clira-ne@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 14:16:10 by clira-ne          #+#    #+#             */
/*   Updated: 2023/10/19 15:52:41 by clira-ne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <ctype.h>
#include <stdio.h>

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122) // considerando a tabela ascii verificação se for minuscula
	{
		return (c - 32); // subtração considerando a tabela ascii, ou seja, 122 - 65 = 32 para ir para as maisculas
	}
	return (c);
}

int main()
{
	printf("%c\n", ft_toupper(66));
	printf("função original: %c\n", toupper(66));
	return (0);
}

//usada para converter um caractere em maiúsculo (upecase)
