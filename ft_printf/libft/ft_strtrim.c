/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buryilma <buryilma@42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 05:41:30 by buryilma          #+#    #+#             */
/*   Updated: 2023/05/26 05:44:19 by buryilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_istrim(char c, const char *set)
{
	unsigned int	i;

	i = 0;
	while (set[i] != '\0' && i < ft_strlen(set))
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	end;
	size_t	index;
	char	*str;

	if (!s1)
		return (0);
	if (!set)
		return (ft_strdup(s1));
	i = 0;
	end = ft_strlen(s1);
	while (s1[i] != '\0' && ft_istrim(s1[i], set))
		i++;
	while (end > i && ft_istrim(s1[end - 1], set))
		end--;
	str = (char *)malloc(sizeof(char) * (end - i + 1));
	if (!str)
		return (0);
	index = 0;
	while (i < end)
		str[index++] = s1[i++];
	str[index] = '\0';
	return (str);
}
