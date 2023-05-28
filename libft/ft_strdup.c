/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyeonkim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 16:52:47 by gyeonkim          #+#    #+#             */
/*   Updated: 2022/12/11 16:27:03 by gyeonkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		len;
	char	*src;
	int		i;

	len = ft_strlen(s1);
	src = (char *)malloc(len + 1 * sizeof(char));
	if (!(src))
		return (0);
	i = 0;
	while (s1[i])
	{
		src[i] = s1[i];
		i++;
	}
	src[i] = '\0';
	return (src);
}
