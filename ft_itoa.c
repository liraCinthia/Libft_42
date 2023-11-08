/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clira-ne <clira-ne@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 16:20:23 by clira-ne          #+#    #+#             */
/*   Updated: 2023/11/08 16:11:37 by clira-ne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_n_len(int *n, int *sign)
{
	int	quantity_digits;
	int	n_copy;

	quantity_digits = 0;
	*sign = 1;
	if (*n < 0)
	{
		quantity_digits = 1;
		*n = - (*n);
		*sign = -1;
	}
	n_copy = *n;
	while (n_copy > 0)
	{
		n_copy = n_copy / 10;
		quantity_digits++;
	}
	return (quantity_digits);
}

char	*ft_itoa(int n)
{
	char		*str;
	int			quantity_digits;
	int			sign;

	if (n == -2147483648)
		return (str = ft_strdup("-2147483648"));
	sign = 1;
	quantity_digits = ft_n_len(&n, &sign);
	if (n == 0)
		return (str = ft_strdup("0"));
	str = (char *) ft_calloc((quantity_digits + 1), sizeof(char));
	if (str == NULL)
		return (NULL);
	if (sign < 0)
		str[0] = '-';
	str[quantity_digits] = '\0';
	while (n > 0)
	{
		str[quantity_digits -1] = n % 10 + 48;
		quantity_digits--;
		n = n / 10;
	}
	return (str);
}
