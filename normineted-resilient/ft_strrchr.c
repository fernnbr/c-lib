/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarahfer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 13:12:21 by sarahfer          #+#    #+#             */
/*   Updated: 2025/08/12 14:00:11 by sarahfer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	char_to_find;
	const char		*last_occurrence;

	if (!s)
		return (NULL);
	last_occurrence = NULL;
	char_to_find = (unsigned char)c;
	while (*s != '\0')
	{
		if ((unsigned char)*s == char_to_find)
			last_occurrence = s;
		s++;
	}
	if (char_to_find == '\0')
		return ((char *)s);
	return ((char *)last_occurrence);
}
