/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusousa <gusousa@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 15:48:41 by gusousa           #+#    #+#             */
/*   Updated: 2022/10/12 14:42:12 by gusousa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	reverse_rotate(t_list **lst)
{
	t_list	*new_last_node;
	t_list	*last_node;

	last_node = ft_lstlast(*lst);
	new_last_node = *lst;
	while (new_last_node->next && new_last_node->next->next != NULL)
		new_last_node = new_last_node->next;
	new_last_node->next = NULL;
	ft_lstadd_front(lst, last_node);
}

void	rra(t_list **lst_a)
{
	reverse_rotate(lst_a);
	ft_printf("rra\n");
}

void	rrb(t_list **lst_b)
{
	reverse_rotate(lst_b);
	ft_printf("rrb\n");
}

void	rrr(t_list **lst_a, t_list **lst_b)
{
	reverse_rotate(lst_a);
	reverse_rotate(lst_b);
	ft_printf("rrr\n");
}
