/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyeonkim <gyeonkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 19:46:49 by gyeonkim          #+#    #+#             */
/*   Updated: 2023/01/09 20:19:11 by gyeonkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*pos;

	pos = *lst;
	if (lst == NULL || new == NULL)
		return ;
	else if (*lst == NULL && new != NULL)
	{
		*lst = new;
	}
	else
	{
		*lst = ft_lstlast(*lst);
		(*lst)-> next = new;
		*lst = pos;
	}
}
