/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusousa <gusousa@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 11:32:42 by gusousa           #+#    #+#             */
/*   Updated: 2022/10/18 15:08:32 by gusousa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	rotate(t_list **lst)
{
	t_list	*first_node;
	t_list	*second_node;

	first_node = *lst;
	second_node = (*lst)->next;
	if (second_node)
	{
		*lst = second_node;
		first_node->next = NULL;
		ft_lstadd_back(lst, first_node);
	}
}

void	ra(t_list **lst_a)
{
	rotate(lst_a);
	ft_printf("ra\n");
}

void	rb(t_list **lst_b)
{
	rotate(lst_b);
	ft_printf("rb\n");
}

void	rr(t_list **lst_a, t_list **lst_b)
{
	rotate(lst_a);
	rotate(lst_b);
	ft_printf("rr\n");
}
