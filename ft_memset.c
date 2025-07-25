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

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*p_s;

	p_s = NULL;
	p_s = (unsigned char *)s;
	while (n--)
		*p_s++ = (unsigned char)c;
	return (s);
}
