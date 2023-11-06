/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clira-ne <clira-ne@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 14:34:12 by clira-ne          #+#    #+#             */
/*   Updated: 2023/11/06 19:25:22 by clira-ne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	long int	result;
	int			negative;

	negative = 1;
	result = 0;
	while ((*nptr && *nptr == 32) || (*nptr >= 9 && *nptr <= 13))
	{
		nptr++;
	}
	if (*nptr == '-')
	{
		negative = -1;
	}
	if (*nptr == '-' || *nptr == '+')
	{
		nptr++;
	}
	while (*nptr && *nptr >= 48 && *nptr <= 57)
	{
		result = result * 10 + (*nptr - 48);
		nptr++;
	}
	return (result * negative);
}
