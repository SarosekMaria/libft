/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sassassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 13:41:53 by sassassi          #+#    #+#             */
/*   Updated: 2019/09/15 19:02:22 by sassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	id;
	size_t	is;
	size_t	len_d;
	size_t	len_s;

	len_s = ft_strlen(src);
	id = 0;
	is = 0;
	if (dst[0] == '\0' && src[0] == '\0')
		return (0);
	while (dst[id] && id < size)
		id++;
	len_d = id;
	id = 0;
	while (dst[id])
		id++;
	while (src[is] && id < size - 1 && size != 0)
	{
		dst[id] = src[is];
		id++;
		is++;
	}
	dst[id] = '\0';
	return (len_d + len_s);
}
