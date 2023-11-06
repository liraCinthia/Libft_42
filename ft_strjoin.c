/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clira-ne <clira-ne@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 12:21:20 by clira-ne          #+#    #+#             */
/*   Updated: 2023/11/04 16:19:32 by clira-ne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*store;

	store = (char *)malloc((ft_strlen(s1) + ft_strlen(s2) + 1));
	if (store == NULL)
		return (NULL);
	if (!s1)
		return (ft_strdup((char *)s2));
	if (!s2)
		return (ft_strdup((char *)s1));
	ft_strlcpy(store, s1, ft_strlen(s1) + 1);
	ft_strlcat(store, s2, ft_strlen(s1) + ft_strlen(s2) + 1);
	return (store);
}
