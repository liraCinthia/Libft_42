/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clira-ne <clira-ne@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 09:38:06 by clira-ne          #+#    #+#             */
/*   Updated: 2023/10/16 17:34:27 by clira-ne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <string.h>
#include <stdio.h>

size_t ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

int main()
{
	printf("%zu\n", ft_strlen("segunda"));
	printf("função original: %lu\n", strlen("segunda"));
	return (0);
}

//a função strlen() retorna o tamanho de uma string

//SIZE_T -> É um tipo usado para representar o tamanho de objetos em bytes e, portanto, usado como tipo de retorno pelo operador sizeof .
//É garantido que seja grande o suficiente para conter o tamanho do maior objeto que o sistema host pode manipular.
//Basicamente, o tamanho máximo permitido depende do compilador; se o compilador for de 32 bits,
//será simplesmente um typedef (ou seja, alias) para unsigned int , mas se o compilador for de 64 bits,
//será um typedef para unsigned long long . O tipo de dados size_t nunca é negativo.
//Portanto, muitas funções da biblioteca C como malloc, memcpy e strlen declaram seus argumentos e retornam o tipo como size_t .

//A primeira chamada para printf exibe o resultado da função ft_strlen na string "segunda".
//O %zu é um especificador de formato que é usado para imprimir um valor do tipo size_t, que é o tipo de retorno da função ft_strlen.
//A segunda chamada para printf imprime o resultado da função strlen na mesma string usando %lu, que é usado para imprimir um valor do tipo unsigned long.
