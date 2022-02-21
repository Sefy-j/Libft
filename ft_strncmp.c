/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlopez-f <jlopez-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 16:52:38 by jlopez-f          #+#    #+#             */
/*   Updated: 2021/11/05 13:18:35 by jlopez-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *sr1, const char *sr2, size_t n)
{
	size_t			c;
	unsigned char	*s1;
	unsigned char	*s2;

	s1 = (unsigned char *)sr1;
	s2 = (unsigned char *)sr2;
	c = 0;
	if (n == 0)
		return (0);
	while ((s1[c] != '\0') && (s2[c] != '\0') \
			&& (s1[c] == s2[c]) && (c < (n - 1)))
		c++;
	return (s1[c] - s2[c]);
}
