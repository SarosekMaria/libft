/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sassassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 19:48:41 by sassassi          #+#    #+#             */
/*   Updated: 2019/09/12 17:55:13 by sassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_coin(const char *haystack, const char *needle, size_t i1)
{
	size_t	i2;

	i2 = 0;
	while (needle[i2])
	{
		if (haystack[i1] != needle[i2])
			return (0);
		i1++;
		i2++;
	}
	return (1);
}

char		*ft_strstr(const char *haystack, const char *needle)
{
	size_t	i1;

	i1 = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (haystack[i1])
	{
		if (haystack[i1] == needle[0])
			if (ft_coin(haystack, needle, i1) == 1)
				return ((char *)(haystack + i1));
		i1++;
	}
	return (NULL);
}
