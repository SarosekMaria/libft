/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sassassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 15:11:43 by sassassi          #+#    #+#             */
/*   Updated: 2019/09/12 20:25:06 by sassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;
	size_t	i2;

	i2 = 0;
	i = start;
	if ((len + 1) == 0)
		return (NULL);
	if (s == NULL)
		return (NULL);
	str = (char*)malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	while (i2 < len)
	{
		str[i2] = s[i];
		i++;
		i2++;
	}
	str[i2] = '\0';
	return (str);
}
