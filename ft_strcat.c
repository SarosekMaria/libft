/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sassassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 18:13:19 by sassassi          #+#    #+#             */
/*   Updated: 2019/09/15 19:03:09 by sassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	size_t	i1;
	size_t	index;

	index = 0;
	i1 = ft_strlen(s1);
	while (s2[index])
	{
		s1[i1] = s2[index];
		i1++;
		index++;
	}
	s1[i1] = '\0';
	return (s1);
}
