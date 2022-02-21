/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlopez-f <jlopez-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 12:09:15 by jlopez-f          #+#    #+#             */
/*   Updated: 2021/11/10 18:46:34 by jlopez-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static unsigned long long int	ft_checknb(unsigned long long int nb, int s)
{
	unsigned long long int	nl;

	nl = 9223372036854775806;
	if (nb > nl && s > 0)
		return (-1);
	if (nb > nl + 1 && s < 0)
		return (0);
	return (nb);
}

int	ft_atoi(const char *str)
{
	int						i;
	int						s;
	unsigned long long int	r;

	i = 0;
	s = 1;
	r = 0;
	while (str[i] == ' ' || str[i] == '\f' || str[i] == '\n' \
		|| str[i] == '\r' || str[i] == '\t' || str[i] == '\v')
		i++;
	if (str[i] == '+' || str[i] == '-')
	{	
		if (str[i] == '-')
			s *= (-1);
		i++;
	}	
	while (str[i] >= '0' && str[i] <= '9')
	{
		r = r * 10 + (str[i] - '0');
		i++;
	}
	r = ft_checknb(r, s);
	return ((int)r * s);
}
