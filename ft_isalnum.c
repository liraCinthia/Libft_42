/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clira-ne <clira-ne@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 14:27:10 by clira-ne          #+#    #+#             */
/*   Updated: 2023/10/16 16:25:49 by clira-ne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <ctype.h>
#include <stdio.h>

int	ft_isalnum(int c)
{
	if ((c >= '0' && c <= '9') || (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (8);
	}
	return (0);
}

int main()
{
	printf("%d\n", ft_isalnum('A'));
	printf("função original: %d\n", isalnum('A'));
	return (0);
}

//verificar se um caractere é alfanumérico,
//o que significa que ele é uma letra (maiúscula ou minúscula)
//ou um dígito numérico (0 a 9). A função retorna um valor booleano
// (geralmente 1 para verdadeiro e 0 para falso)
