/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlopez-f <jlopez-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 17:29:55 by jlopez-f          #+#    #+#             */
/*   Updated: 2021/11/10 16:36:13 by jlopez-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	i;
	size_t	s2;
	size_t	ne;

	i = 0;
	if (to_find[i] == '\0')
		return ((char *)str);
	while (str[i] != '\0')
	{	
		ne = 0;
		if (str[i] == to_find[ne])
		{	
			s2 = i;
			while (str[i] == to_find[ne] && i < len)
			{
				ne++;
				i++;
				if (to_find[ne] == '\0')
					return ((char *)str + s2);
			}
			i = s2;
		}
		i++;
	}
	return (0);
}
