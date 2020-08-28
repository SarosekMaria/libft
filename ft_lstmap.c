/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sassassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 19:11:14 by sassassi          #+#    #+#             */
/*   Updated: 2019/09/14 20:46:28 by sassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		*ft_clr(t_list *begin, t_list *tmp)
{
	while (begin->next)
	{
		tmp = begin->next;
		free(begin);
		begin = tmp;
	}
	free(begin);
	return (NULL);
}

static t_list	*ft_init(t_list *lst, t_list *begin, t_list *next,
		t_list *(*f)(t_list *elem))
{
	t_list		*tmp;

	while (lst->next)
	{
		tmp = (t_list*)malloc(sizeof(t_list) * 1);
		if (tmp == NULL)
			return (ft_clr(begin, tmp));
		tmp = (*f)(lst);
		next->next = tmp;
		next = tmp;
		lst = lst->next;
	}
	tmp = (t_list*)malloc(sizeof(t_list) * 1);
	if (tmp == NULL)
		return (ft_clr(begin, tmp));
	tmp = (*f)(lst);
	next->next = tmp;
	next = tmp;
	tmp->next = NULL;
	return (begin);
}

t_list			*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list		*begin;
	t_list		*next;

	if (lst != NULL && f != NULL)
	{
		begin = (t_list*)malloc(sizeof(t_list) * 1);
		if (begin == NULL)
			return (NULL);
		begin = (*f)(lst);
		next = begin;
		lst = lst->next;
		return (ft_init(lst, begin, next, f));
	}
	return (NULL);
}
