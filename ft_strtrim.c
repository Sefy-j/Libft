/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlopez-f <jlopez-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 13:18:39 by jlopez-f          #+#    #+#             */
/*   Updated: 2021/11/10 15:01:26 by jlopez-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_fstset(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	skip;

	i = 0;
	j = 0;
	skip = 0;
	while (s1[i] != '\0' && set[j] != '\0')
	{
		if (s1[i] != set[j])
		{
			j++;
			if (set[j] == '\0')
				break ;
		}
		else
		{
			skip++;
			i++;
			j = 0;
		}	
	}
	return (skip);
}

static size_t	ft_lstset(char const *s1, char const *set)
{
	size_t	len;
	size_t	i;
	size_t	j;
	size_t	skip;

	i = 0;
	j = 0;
	skip = 0;
	len = ft_strlen(s1);
	while (i < len && set[j] != '\0')
	{
		if (s1[len - i - 1] != set[j])
		{
			j++;
			if (set[j] == '\0')
				break ;
		}
		else
		{
			skip++;
			i++;
			j = 0;
		}	
	}
	return (skip);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	skip1;
	size_t	skip2;
	size_t	i;
	size_t	nlen;
	char	*str;

	i = -1;
	if (!s1 || !set)
		return (NULL);
	skip1 = ft_fstset(s1, set);
	skip2 = ft_lstset(s1, set);
	nlen = ft_strlen(s1) - (skip1 + skip2);
	if (ft_strlen(s1) < skip1 + skip2)
		nlen = 0;
	str = (char *)malloc(sizeof(char) * (nlen + 1));
	if (!str)
		return (NULL);
	while (++i < nlen)
		str[i] = s1[skip1 + i];
	str[i] = '\0';
	return (str);
}
