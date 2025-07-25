/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarahfer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 18:00:51 by sarahfer          #+#    #+#             */
/*   Updated: 2024/11/07 18:13:53 by sarahfer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*new_str;
	int		len;

	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	new_str = (char *)malloc(len + 1);
	if (!new_str)
		return (NULL);
	new_str[len] = '\0';
	i = 0;
	while (i < len)
	{
		new_str[i] = (*f)(i, s[i]);
		i++;
	}
	return (new_str);
}
