/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstat.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sassassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/15 17:39:38 by sassassi          #+#    #+#             */
/*   Updated: 2019/09/15 17:42:58 by sassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstat(t_list *begin_list, size_t nb)
{
	t_list	*tmp;
	size_t	i;

	i = 0;
	tmp = begin_list;
	if (ft_lstsize(begin_list) < nb)
		return (NULL);
	while (i < nb)
	{
		tmp = tmp->next;
		i++;
	}
	return (tmp);
}
