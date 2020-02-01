/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otiffiny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/20 16:40:48 by otiffiny          #+#    #+#             */
/*   Updated: 2019/09/20 19:17:31 by otiffiny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list			*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *newlist;
	t_list *list;

	newlist = NULL;
	if (!lst)
		return (NULL);
	else
	{
		newlist = f(ft_lstnew(lst->content, lst->content_size));
		list = newlist;
		while ((lst = lst->next))
		{
			list->next = f(ft_lstnew(lst->content, lst->content_size));
			list = list->next;
		}
		return (newlist);
	}
}
