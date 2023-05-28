/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyeonkim <gyeonkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 20:22:10 by gyeonkim          #+#    #+#             */
/*   Updated: 2022/12/19 15:36:42 by gyeonkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	h;

	h = 0;
	if (*needle == '\0')
		return ((char *)haystack);
	while (haystack[h] && h < len)
	{
		i = 0;
		if (haystack[h + i] && needle[i])
		{
			while (haystack[h + i] == needle[i] && (h + i) < len)
			{
				i++;
				if (!(needle[i]))
				{
					return ((char *)&haystack[h]);
				}
			}
		}
		h++;
	}
	return (0);
}
