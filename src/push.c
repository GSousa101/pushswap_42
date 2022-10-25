/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusousa <gusousa@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 15:21:44 by gusousa           #+#    #+#             */
/*   Updated: 2022/10/25 11:23:11 by gusousa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	push(t_list **lst_orig, t_list **lst_dest)
{
	t_list	*new_node1;
	t_list	*new_head_orig;

	new_node1 = *lst_orig;
	if (new_node1)
	{
		// O segundo nó da lista2 vira o 1º
		new_head_orig = (*lst_orig)->next;
		*lst_orig = new_head_orig;
		ft_lstadd_front(lst_dest, new_node1);
	}
}

void	pa(t_list **lst_a, t_list **lst_b)
{
	push(lst_b, lst_a);
	ft_printf("pa\n");
}

void	pb(t_list **lst_a, t_list **lst_b)
{
	push(lst_a, lst_b);
	ft_printf("pb\n");
}
