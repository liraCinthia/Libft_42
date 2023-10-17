/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clira-ne <clira-ne@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 15:03:48 by clira-ne          #+#    #+#             */
/*   Updated: 2023/10/16 16:28:25 by clira-ne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <ctype.h>
#include <stdio.h>

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
	{
		return (1);
	}
	return (0);
}

int main()
{
	//char	*s = "ç";
	//quando for testar com ponteiro passar *s
	printf("%d\n", ft_isascii(130));
	printf("função original: %d\n", isascii(130));
	return (0);
}

//determina se um dado caractere é um caractere ASCII
