/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusousa <gusousa@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 15:21:44 by gusousa           #+#    #+#             */
/*   Updated: 2022/10/06 15:44:33 by gusousa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	push(t_list **lst_orig, t_list **lst_dest)
{
	t_list	*orig_node1;
	t_list	*orig_node2;

	orig_node1 = *lst_orig;
	if (orig_node1)
	{
		orig_node2 = (*lst_orig)->next;
		lst_orig = orig_node2;
		ft_lstadd_front(lst_dest, orig_node1);
	}
}

void	pa(t_lst **list_a, t_list **lst_b)
{
	push(lst_b, lst_a);
	ft_printf("pa\n");
}

void	pb(t_lst **list_a, t_list **lst_b)
{
	push(lst_a, lst_b);
	ft_printf("pb\n");
}
