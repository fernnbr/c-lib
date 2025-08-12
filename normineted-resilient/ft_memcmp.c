/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarahfer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 13:14:38 by sarahfer          #+#    #+#             */
/*   Updated: 2025/08/12 14:37:51 by sarahfer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*s1_char;
	const unsigned char	*s2_char;
	size_t				i;

	if (n == 0)
		return (0);
	if (!s1 || !s2)
		return (0);
	s1_char = (const unsigned char *)s1;
	s2_char = (const unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (s1_char[i] != s2_char[i])
			return ((int)(s1_char[i]) - (int)(s2_char[i]));
		i++;
	}
	return (0);
}
