/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sassassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 16:42:56 by sassassi          #+#    #+#             */
/*   Updated: 2019/09/15 18:12:48 by sassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*fresh;

	fresh = (t_list*)malloc(sizeof(t_list) * 1);
	if (fresh == NULL)
		return (NULL);
	if (content == NULL)
	{
		fresh->content = NULL;
		fresh->content_size = 0;
		fresh->next = NULL;
		return (fresh);
	}
	fresh->content = (void*)malloc(content_size);
	if (fresh->content == NULL)
	{
		free(fresh);
		return (NULL);
	}
	ft_memcpy(fresh->content, content, content_size);
	fresh->content_size = content_size;
	fresh->next = NULL;
	return (fresh);
}
