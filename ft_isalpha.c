/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clira-ne <clira-ne@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 09:55:52 by clira-ne          #+#    #+#             */
/*   Updated: 2023/10/16 16:46:47 by clira-ne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <ctype.h>
#include <stdio.h>

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1024);
	}
	return (0);
}

int main()
{
        printf("%d\n", ft_isalpha('K'));
		printf("Função original: %d\n", isalpha('K'));
        return (0);
}

//verifica se um caractere é uma letra do alfabeto, seja minúscula ou maiscúla
