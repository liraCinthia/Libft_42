/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clira-ne <clira-ne@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 11:51:30 by clira-ne          #+#    #+#             */
/*   Updated: 2023/11/09 16:02:38 by clira-ne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*store;

	store = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
	if (store)
	{
		ft_strlcpy(store, s, ft_strlen(s) + 1);
		return (store);
	}
	else
	{
		return (NULL);
	}
}
