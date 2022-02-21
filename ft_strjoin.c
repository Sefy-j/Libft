/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlopez-f <jlopez-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 13:16:04 by jlopez-f          #+#    #+#             */
/*   Updated: 2022/01/19 13:20:32 by jlopez-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, char const *s2)
{
	size_t	i;
	size_t	k;
	size_t	len1;
	size_t	len2;
	char	*str;

	if (!s1 || !s2)
		return (NULL);
	i = -1;
	k = -1;
	str = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!str)
		return (NULL);
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	while (++i < len1)
		str[i] = s1[i];
	while (++k < len2)
	{
		str[i] = s2[k];
		i++;
	}
	str[i] = '\0';
	return (str);
}
