/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlopez-f <jlopez-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 16:30:28 by jlopez-f          #+#    #+#             */
/*   Updated: 2021/11/10 14:14:42 by jlopez-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	c;
	size_t	i;

	c = 0;
	i = 0;
	while (src[c] != '\0')
		c++;
	if (size != 0)
	{		
		while ((src[i] != '\0') && (i < (size - 1)))
		{	
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (c);
}
