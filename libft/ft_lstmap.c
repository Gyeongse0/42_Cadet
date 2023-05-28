/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyeonkim <gyeonkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 17:19:50 by gyeonkim          #+#    #+#             */
/*   Updated: 2023/01/09 20:12:34 by gyeonkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newnode;
	t_list	*node;
	t_list	*tmplist;
	void	*ptr;

	node = NULL;
	tmplist = lst;
	if (lst == 0 || f == 0)
		return (0);
	while (tmplist)
	{
		ptr = f(tmplist -> content);
		newnode = ft_lstnew(ptr);
		if (!newnode)
		{
			del(ptr);
			ft_lstclear(&node, del);
			return (0);
		}
		ft_lstadd_back(&node, newnode);
		tmplist = tmplist->next;
	}
	return (node);
}
