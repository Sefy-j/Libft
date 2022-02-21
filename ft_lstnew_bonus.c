/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlopez-f <jlopez-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 14:00:09 by jlopez-f          #+#    #+#             */
/*   Updated: 2021/11/10 15:07:06 by jlopez-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*nelem;

	nelem = (t_list *)malloc(sizeof(t_list));
	if (!nelem)
		return (NULL);
	nelem->content = content;
	nelem->next = NULL;
	return (nelem);
}
