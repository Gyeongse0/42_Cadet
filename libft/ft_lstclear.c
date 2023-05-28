/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyeonkim <gyeonkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 20:13:07 by gyeonkim          #+#    #+#             */
/*   Updated: 2023/01/09 20:17:59 by gyeonkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*cur;

	if (lst == NULL)
		return ;
	while (*lst)
	{
		cur = (*lst)-> next;
		ft_lstdelone(*lst, del);
		*lst = cur;
	}
	*lst = 0;
}
