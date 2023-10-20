/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clira-ne <clira-ne@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 16:08:53 by clira-ne          #+#    #+#             */
/*   Updated: 2023/10/20 13:48:09 by clira-ne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
int main()
{
	ft_putchar_fd('a', 1);
	return (0);
}
// "File Descriptor" (descritor de arquivo) ou "File Handle" (identificador de arquivo)
// Um descritor de arquivo é um valor inteiro que o sistema operacional atribui a um arquivo ou fluxo de dados aberto pelo programa.
// Esses descritores de arquivo são usados para identificar e manipular arquivos ou fluxos de dados durante a operação do programa.
// abrir, ler, gravar e fechar arquivos
