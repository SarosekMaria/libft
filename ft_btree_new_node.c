/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btree_new_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sassassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/15 17:56:51 by sassassi          #+#    #+#             */
/*   Updated: 2019/09/15 18:14:32 by sassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_btree		*ft_btree_new_node(void *item, size_t item_size)
{
	t_btree *new;

	new = (t_btree*)malloc(sizeof(t_btree) * 1);
	if (new == NULL)
		return (NULL);
	if (item == NULL)
	{
		new->item = NULL;
		new->item_size = 0;
		new->left = NULL;
		new->right = NULL;
		return (new);
	}
	new->item = (void*)malloc(item_size);
	if (new->item == NULL)
	{
		free(new);
		return (NULL);
	}
	ft_memcpy(new->item, item, item_size);
	new->left = NULL;
	new->right = NULL;
	new->item_size = item_size;
	return (new);
}
