/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clira-ne <clira-ne@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 16:20:23 by clira-ne          #+#    #+#             */
/*   Updated: 2023/11/06 20:00:17 by clira-ne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char	*str;
	int		qtd_digitos;
	int		copia_n;

	copia_n = n;
	qtd_digitos = 0;
	if (n == 0)
		qtd_digitos = 1;
	while (n != 0)
	{
		n = n / 10;
		qtd_digitos++;
	}
	str = (char *) ft_calloc((qtd_digitos + 1), sizeof(char));
	if (str == NULL)
		return (NULL);
	while (copia_n != 0)
	{
		str[qtd_digitos -1] = copia_n % 10 + 48;
		qtd_digitos--;
		copia_n = copia_n / 10;
	}
	return (str);
}
int main()
{
	ft_itoa(56755);
	return (0);
}
