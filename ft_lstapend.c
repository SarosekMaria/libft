/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstapend.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sassassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/15 17:18:41 by sassassi          #+#    #+#             */
/*   Updated: 2019/09/15 17:21:31 by sassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstapend(t_list **alst, t_list *new)
{
	if (new != NULL && alst != NULL)
	{
		while ((*alst)->next)
			(*alst) = (*alst)->next;
		(*alst)->next = new;
		new->next = NULL;
	}
}
