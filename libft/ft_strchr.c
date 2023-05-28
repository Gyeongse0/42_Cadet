/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyeonkim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 14:52:34 by gyeonkim          #+#    #+#             */
/*   Updated: 2022/12/23 17:27:32 by gyeonkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*temp;
	char	ch;

	i = 0;
	ch = (char)c;
	temp = (char *)s;
	while (temp[i] && temp[i] != ch)
	{
		i++;
	}
	if (temp[i] == ch)
	{
		return (temp + i);
	}
	return (NULL);
}
