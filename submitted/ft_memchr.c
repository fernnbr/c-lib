/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarahfer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 17:07:19 by sarahfer          #+#    #+#             */
/*   Updated: 2025/08/12 17:07:22 by sarahfer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	c_char;
	unsigned char	*s_char;
	size_t			i;

	c_char = (unsigned char )c;
	s_char = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (s_char[i] == c_char)
			return (&s_char[i]);
		i++;
	}
	return (NULL);
}
