/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarahfer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 17:04:14 by sarahfer          #+#    #+#             */
/*   Updated: 2025/08/12 17:04:18 by sarahfer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	i;
	int	isminus;
	int	isdigit;

	i = 0;
	while (nptr[i] == 32 || (nptr[i] >= 9 && nptr[i] <= 13))
		i++;
	isminus = 1;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			isminus *= -1;
		i++;
	}
	isdigit = 0;
	while (ft_isdigit(nptr[i]))
	{
		isdigit = isdigit * 10 + (nptr[i] - '0');
		i++;
	}
	return (isdigit * isminus);
}
