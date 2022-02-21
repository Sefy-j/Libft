/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlopez-f <jlopez-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 16:33:45 by jlopez-f          #+#    #+#             */
/*   Updated: 2021/11/10 14:13:34 by jlopez-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	c;
	size_t	ssrc;
	size_t	sdest;

	c = 0;
	sdest = ft_strlen(dest);
	ssrc = ft_strlen(src);
	if (size < sdest + 1)
		return (ssrc + size);
	while ((src [c] != '\0') && (c < (size - sdest - 1)))
	{
		dest[sdest + c] = src[c];
		c++;
	}
	dest[sdest + c] = '\0';
	return (sdest + ssrc);
}
