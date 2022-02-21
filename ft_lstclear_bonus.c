/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlopez-f <jlopez-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 14:06:26 by jlopez-f          #+#    #+#             */
/*   Updated: 2021/11/08 16:04:33 by jlopez-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tmplist;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		tmplist = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = tmplist;
	}
	*lst = NULL;
}
