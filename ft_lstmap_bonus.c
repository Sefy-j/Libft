/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlopez-f <jlopez-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 14:07:15 by jlopez-f          #+#    #+#             */
/*   Updated: 2021/11/08 16:26:41 by jlopez-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*nelem;
	t_list	*nlst;

	if (!lst || !f)
		return (NULL);
	nlst = NULL;
	while (lst)
	{
		nelem = ft_lstnew(f(lst->content));
		if (!nelem)
		{	
			ft_lstclear(&nlst, del);
			return (NULL);
		}
		ft_lstadd_back(&nlst, nelem);
		lst = lst->next;
	}
	return (nlst);
}
