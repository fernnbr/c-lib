/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarahfer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 17:13:12 by sarahfer          #+#    #+#             */
/*   Updated: 2025/08/12 17:13:15 by sarahfer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*last_occurrence;
	char	char_to_find;

	last_occurrence = NULL;
	char_to_find = (char)c;
	while (*s != '\0')
	{
		if (*s == char_to_find)
		{
			last_occurrence = (char *)s;
		}
		s++;
	}
	if (char_to_find == '\0')
	{
		return ((char *)s);
	}
	return (last_occurrence);
}
