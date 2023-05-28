/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyeonkim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 22:08:16 by gyeonkim          #+#    #+#             */
/*   Updated: 2022/11/24 12:07:31 by gyeonkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	temp_i;

	i = 0;
	temp_i = 0;
	while (dst[i] && i < dstsize)
	{
		i++;
	}
	while (src[temp_i] && (i + temp_i + 1) < dstsize)
	{
		dst[i + temp_i] = src[temp_i];
		temp_i++;
	}
	if (i < dstsize)
	{
		dst[i + temp_i] = '\0';
	}
	return (i + ft_strlen(src));
}
