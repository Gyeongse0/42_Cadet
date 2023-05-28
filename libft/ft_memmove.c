/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyeonkim <gyeonkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 17:13:47 by gyeonkim          #+#    #+#             */
/*   Updated: 2022/12/19 16:40:10 by gyeonkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*tmp;
	const char	*s;

	tmp = dst;
	s = src;
	if (!(dst) && !(src))
		return (0);
	if (dst <= src)
	{
		while (len-- > 0)
		{
			*tmp++ = *s++;
		}
	}
	else
	{
		tmp += len;
		s += len;
		while (len-- > 0)
		{
			*--tmp = *--s;
		}
	}
	return (dst);
}
