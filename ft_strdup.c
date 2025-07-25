/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarahfer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 19:49:03 by sarahfer          #+#    #+#             */
/*   Updated: 2024/11/15 16:04:47 by sarahfer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	i;
	size_t	len;
	char	*strdup;

	len = ft_strlen(s);
	strdup = (char *)ft_calloc((len + 1), sizeof(char));
	if (strdup == NULL)
		return (NULL);
	i = 0;
	while (i < len + 1)
	{
		strdup[i] = s[i];
		i++;
	}
	return (strdup);
}
