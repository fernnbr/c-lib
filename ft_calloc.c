/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarahfer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 19:46:14 by sarahfer          #+#    #+#             */
/*   Updated: 2024/11/07 21:56:48 by sarahfer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	total;
	void	*mem_alloc;

	total = nmemb * size;
	if (nmemb == 0 || size == 0)
		return (malloc(0));
	if (nmemb != 0 && total / nmemb != size)
		return (NULL);
	mem_alloc = (void *)malloc(total);
	if (mem_alloc == NULL)
		return (NULL);
	ft_bzero(mem_alloc, total);
	return (mem_alloc);
}
