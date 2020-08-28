/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sassassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 16:52:45 by sassassi          #+#    #+#             */
/*   Updated: 2019/09/12 20:03:51 by sassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*m;
	size_t	i;

	i = 0;
	m = (char*)malloc(sizeof(*m) * (ft_strlen(s1) + 1));
	if (m == NULL)
		return (NULL);
	while (s1[i])
	{
		m[i] = s1[i];
		i++;
	}
	m[i] = '\0';
	return (m);
}
