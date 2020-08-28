/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sassassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 17:37:52 by sassassi          #+#    #+#             */
/*   Updated: 2019/09/14 18:05:07 by sassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void*, size_t))
{
	t_list	*tmp;

	if (alst != NULL)
	{
		if ((*alst)->next)
		{
			while ((*alst)->next)
			{
				tmp = (*alst)->next;
				ft_lstdelone(alst, del);
				*alst = tmp;
			}
		}
		ft_lstdelone(alst, del);
		*alst = NULL;
	}
}
