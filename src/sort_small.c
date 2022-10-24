/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusousa <gusousa@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 15:13:16 by gusousa           #+#    #+#             */
/*   Updated: 2022/10/24 16:22:49 by gusousa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	sort_3(t_list **list_a)
{
	while (!is_ordered)
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

	while (!is_ordered)
	{
		// Organiza 2
		sort_3();
	}
}
