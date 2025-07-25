/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarahfer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 17:00:45 by sarahfer          #+#    #+#             */
/*   Updated: 2024/11/07 21:46:45 by sarahfer         ###   ########.fr       */
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
