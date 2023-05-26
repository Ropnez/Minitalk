/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buryilma <buryilma@42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 05:41:30 by buryilma          #+#    #+#             */
/*   Updated: 2023/05/26 05:43:36 by buryilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*dest;
	char	*src2;
	size_t	i;

	i = 0;
	dest = (char *)dst;
	src2 = (char *)src;
	if (!dst && !src)
		return (NULL);
	if (src2 < dest)
		while (++i <= len)
			dest[len - i] = src2[len - i];
	else
		return (ft_memcpy(dst, src, len));
	return (dst);
}
