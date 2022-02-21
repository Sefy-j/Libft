/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlopez-f <jlopez-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 17:02:15 by jlopez-f          #+#    #+#             */
/*   Updated: 2021/11/05 13:11:20 by jlopez-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	c;

	c = 0;
	if (n == 0)
		return (0);
	while (((unsigned char *)s1)[c] == ((unsigned char *)s2)[c] && c < n - 1)
		c++;
	return (((unsigned char *)s1)[c] - ((unsigned char *)s2)[c]);
}
