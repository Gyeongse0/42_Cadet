/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyeonkim <gyeonkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 18:21:46 by gyeonkim          #+#    #+#             */
/*   Updated: 2023/05/27 02:53:08 by gyeonkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_lencheck(char const *s, unsigned int start, size_t len)
{
	if ((ft_strlen(s) - start) < len)
		return ((ft_strlen(s) - start));
	else
		return (len);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*src;
	size_t	i;
	size_t	s_len;

	s_len = ft_strlen(s);
	i = 0;
	if (s == NULL)
		return (0);
	if (s_len < start)
		return (ft_strdup(""));
	src = (char *)malloc((ft_lencheck(s, start, len) + 1) * sizeof(char));
	if (!(src))
		return (0);
	while (s[start] && i < len)
	{
		src[i++] = s[start++];
	}
	src[i] = '\0';
	return (src);
}
