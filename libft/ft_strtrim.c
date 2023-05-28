/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyeonkim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 15:51:40 by gyeonkim          #+#    #+#             */
/*   Updated: 2022/12/18 21:14:38 by gyeonkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*result;

	start = 0;
	end = ft_strlen(s1);
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	while (end && s1[end -1] && ft_strchr(set, s1[end - 1]) && end > start)
		end--;
	result = (char *)malloc(sizeof(char) * (end - start + 1));
	if (!(result))
		return (0);
	ft_strlcpy(result, s1 + start, end - start + 1);
	return (result);
}
