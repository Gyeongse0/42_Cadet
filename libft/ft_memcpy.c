/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyeonkim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 18:20:02 by gyeonkim          #+#    #+#             */
/*   Updated: 2022/12/11 15:51:16 by gyeonkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	size_t				i;
	unsigned char		*temp;
	const unsigned char	*tempp;

	i = 0;
	temp = (unsigned char *)dst;
	tempp = (const unsigned char *)src;
	if (temp == NULL && tempp == NULL)
		return (0);
	while (i < n)
	{
		temp[i] = tempp[i];
		i++;
	}
	return (temp);
}
