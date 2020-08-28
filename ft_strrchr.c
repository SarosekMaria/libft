/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sassassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/15 17:28:58 by sassassi          #+#    #+#             */
/*   Updated: 2019/09/15 17:29:01 by sassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int i;
	int index;
	int count;

	count = 0;
	index = 0;
	i = 0;
	if ((char)c == '\0')
		return ((char *)(s + ft_strlen(s)));
	while (s[i])
	{
		if (s[i] == (char)c)
		{
			index = i;
			count++;
		}
		i++;
	}
	if (count == 0)
		return (NULL);
	return ((char *)(s + index));
}
