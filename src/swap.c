/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusousa <gusousa@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 14:43:37 by gusousa           #+#    #+#             */
/*   Updated: 2022/11/16 18:39:00 by gusousa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	swap(t_list **lst)
{
	t_list	*second_node;

	//My idea
	second_node = (*lst)->next;
	if (second_node)
	{
		(*lst)->next = second_node->next;
		second_node->next = *lst;
		*lst = second_node;
	}
}

void	sa(t_list **lst_a)
{
	swap(lst_a);
	ft_printf("sa\n");
}

void	sb(t_list **lst_b)
{
	swap(lst_b);
	ft_printf("sb\n");
}

void	ss(t_list **lst_a, t_list **lst_b)
{
	swap(lst_a);
	swap(lst_b);
	ft_printf("ss\n");
}
