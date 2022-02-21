/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlopez-f <jlopez-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 16:51:21 by jlopez-f          #+#    #+#             */
/*   Updated: 2021/11/10 16:32:11 by jlopez-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	len;

	len = ft_strlen(str);
	str += len;
	while (len >= 0)
	{
		if (*str == (unsigned char)c)
			return ((char *)str);
		str--;
		len--;
	}
	if (c == '\0')
		return ((char *)str);
	return (0);
}
