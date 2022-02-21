/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlopez-f <jlopez-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 13:07:41 by jlopez-f          #+#    #+#             */
/*   Updated: 2021/11/08 13:50:28 by jlopez-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_nbcount(long int nb)
{
	int	i;

	i = 0;
	if (nb == 0 || nb < 0)
		i++;
	while (nb != 0)
	{
		nb /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char		*num;
	int			i;
	int			k;
	long int	nb;

	k = 0;
	nb = n;
	i = ft_nbcount(nb);
	num = (char *)malloc(sizeof(char) * (i + 1));
	if (!num)
		return (NULL);
	if (n < 0)
	{
		nb = -nb;
		num[0] = '-';
		k++;
	}
	num[i] = '\0';
	while (i > k)
	{
		num[i - 1] = nb % 10 + '0';
		nb /= 10;
		i--;
	}
	return (num);
}
