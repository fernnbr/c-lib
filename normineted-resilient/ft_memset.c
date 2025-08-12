/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   21 - ft_memset.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarahfer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 13:13:14 by sarahfer          #+#    #+#             */
/*   Updated: 2025/08/12 13:13:16 by sarahfer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*dest;
	unsigned char	c_char;

	if (!s || n == 0)
		return (s);
	dest = (unsigned char *)s;
	c_char = (unsigned char)c;
	while (n--)
		*dest++ = c_char;
	return (s);
}
