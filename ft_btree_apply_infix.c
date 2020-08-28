/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btree_apply_infix.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sassassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/15 18:23:25 by sassassi          #+#    #+#             */
/*   Updated: 2019/09/15 18:30:19 by sassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_btree_apply_infix(t_btree *root, void (*applyf)(t_btree *elem))
{
	if (root != NULL && applyf != NULL)
	{
		ft_btree_apply_infix(root->left, applyf);
		applyf(root);
		ft_btree_apply_infix(root->right, applyf);
	}
}
