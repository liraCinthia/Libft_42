/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clira-ne <clira-ne@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 17:35:18 by clira-ne          #+#    #+#             */
/*   Updated: 2023/10/20 18:53:35 by clira-ne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, 1);
	ft_putchar_fd('\n', 1);
}
int main()
{
	ft_putendl_fd("aoba", 1);
	return (0);
}
// insere uma quebra de linha no final da string
