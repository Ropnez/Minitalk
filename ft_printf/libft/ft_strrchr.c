/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buryilma <buryilma@42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 05:41:30 by buryilma          #+#    #+#             */
/*   Updated: 2023/05/26 05:44:17 by buryilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		index;
	char	*ptr;

	index = 0;
	ptr = 0;
	while (s[index] != '\0')
	{
		if (s[index] == (char)c)
			ptr = (char *)(s + index);
		index++;
	}
	if (s[index] == (char)c)
		return ((char *) s + index);
	return (ptr);
}
