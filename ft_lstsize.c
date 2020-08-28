/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sassassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/15 17:35:22 by sassassi          #+#    #+#             */
/*   Updated: 2019/09/15 17:41:35 by sassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_lstsize(t_list *begin_list)
{
	size_t	count;
	t_list	*tmp;

	tmp = begin_list;
	count = 0;
	if (begin_list == NULL)
		return (0);
	while (tmp)
	{
		tmp = tmp->next;
		count++;
	}
	return (count);
}
