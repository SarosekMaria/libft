/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sassassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 13:04:44 by sassassi          #+#    #+#             */
/*   Updated: 2019/09/11 11:47:02 by sassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	unsigned char	*m;
	size_t			i;

	i = 0;
	m = (unsigned char*)malloc(sizeof(unsigned char) * size);
	if (m == NULL)
		return (NULL);
	while (i < size)
	{
		m[i] = '\0';
		i++;
	}
	return ((void*)m);
}
