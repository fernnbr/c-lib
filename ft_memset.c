/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarahfer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 15:45:22 by sarahfer          #+#    #+#             */
/*   Updated: 2024/10/22 18:09:22 by sarahfer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*dest;
	unsigned char	c_char;
	size_t			i;

	dest = (unsigned char *)s;
	c_char = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		dest[i] = c_char;
		i++;
	}
	return (s);
}
