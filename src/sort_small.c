/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusousa <gusousa@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 15:13:16 by gusousa           #+#    #+#             */
/*   Updated: 2022/10/24 17:07:48 by gusousa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	is_ordered(t_list *list_a)
{
	while (list_a->next)
	{
		if (ft_atoi(list_a->content) > ft_atoi(list_a->next->content))
			return (0);
		list_a = list_a->next;
	}
	return (1);
}

void	sort_3(t_list **list_a)
{
	while (!is_ordered(*list_a))
	{
		if (biggest_front(list_a) || smaller_front(list_a))
		{
			ra(list_a);
			sa(list_a);
		}
		else
			ra(list_a);
	}
}

void	sort_5(t_list **list_a)
{

	while (!is_ordered(*list_a))
	{
		// Organiza 2
		sort_3();
	}
}
