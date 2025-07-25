/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarahfer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 16:44:15 by sarahfer          #+#    #+#             */
/*   Updated: 2024/10/22 18:18:22 by sarahfer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	d = NULL;
	s = NULL;
	d = (unsigned char *)dst;
	s = (const unsigned char *)src;
	if (d == s || n == 0)
		return (dst);
	if (d < s)
	{
		while (n--)
			*d++ = *s++;
	}
	else
	{
	d += n;
	s += n;
		while (n--)
		*--d = *--s;
	}
	return (dst);
}
