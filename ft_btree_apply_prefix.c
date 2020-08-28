/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btree_apply_prefix.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sassassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/15 18:17:45 by sassassi          #+#    #+#             */
/*   Updated: 2019/09/15 18:25:01 by sassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_btree_apply_prefix(t_btree *root, void (*applyf)(t_btree *elem))
{
	if (root != NULL && applyf != NULL)
	{
		applyf(root);
		ft_btree_apply_prefix(root->left, applyf);
		ft_btree_apply_prefix(root->right, applyf);
	}
}
