/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clira-ne <clira-ne@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 16:57:14 by clira-ne          #+#    #+#             */
/*   Updated: 2023/10/20 17:33:13 by clira-ne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, '\0', n);
}

int	main(void)
{
	char str[40] = "oraciocinioelento";
	ft_bzero(str + 5, 6); // para verificar a partir da posição 5
//	bzero(str, 7);
	printf("função original: %s\n", str);
   return(0);
}
//A função bzero() apaga os dados nos n bytes de memória, começando na localização
//apontada por s, escrevendo zeros (bytes contendo '\0') nessa área.
// | cat -e -> para verificar o final da linha
