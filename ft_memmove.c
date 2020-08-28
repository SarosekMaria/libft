/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sassassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 17:08:07 by sassassi          #+#    #+#             */
/*   Updated: 2019/09/14 16:36:57 by sassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void			ft_copy(int flag, void *dst, const void *src, size_t len)
{
	unsigned char	*buf;
	size_t			i;

	i = 0;
	if (flag == 0)
	{
		while (i < len)
		{
			((unsigned char*)dst)[i] = ((unsigned char*)src)[i];
			i++;
		}
	}
	else
	{
		buf = (unsigned char*)malloc(sizeof(unsigned char) *
				(ft_strlen(src) + 1));
		buf = ((unsigned char*)ft_strcpy(((char*)buf), src));
		buf[ft_strlen(src)] = '\0';
		while (i < len)
		{
			((unsigned char*)dst)[i] = buf[i];
			i++;
		}
		free(buf);
	}
}

void				*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i1;
	int				flag;

	i1 = 0;
	flag = 0;
	if (dst == NULL && src == NULL)
		return (NULL);
	if (len > 9223372000000000000)
		return (NULL);
	while (i1 < len)
	{
		if (&(((unsigned char*)src)[i1]) == &(((unsigned char*)dst)[0]))
		{
			flag = 1;
			break ;
		}
		i1++;
	}
	ft_copy(flag, dst, src, len);
	return (dst);
}
