/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sassassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/15 17:46:12 by sassassi          #+#    #+#             */
/*   Updated: 2019/09/15 17:48:10 by sassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstlast(t_list *begin_list)
{
	t_list	*tmp;

	if (begin_list == NULL)
		return (NULL);
	tmp = begin_list;
	while (tmp->next != NULL)
		tmp = tmp->next;
	return (tmp);
}
