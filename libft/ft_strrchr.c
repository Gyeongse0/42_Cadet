/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyeonkim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 12:30:21 by gyeonkim          #+#    #+#             */
/*   Updated: 2022/12/18 21:12:53 by gyeonkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	char	ch;

	ch = (char)c;
	i = ft_strlen(s);
	while (i != 0 && s[i] != ch)
	{
		i--;
	}
	if (s[i] == ch)
	{
		return ((char *)(s + i));
	}
	else
	{
		return (NULL);
	}
}	
