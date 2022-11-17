/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusousa <gusousa@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 15:13:16 by gusousa           #+#    #+#             */
/*   Updated: 2022/11/17 09:51:03 by gusousa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	is_biggest_back(t_list *list_a)
{
	t_list	*final;

	final = ft_lstlast(list_a);
	while (list_a->next)
	{
		if (ft_atoi(list_a->content) > ft_atoi(final->content))
			return (0);
		list_a = list_a->next;
	}
	return (1);
}

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
		if (is_biggest_back(*list_a))
			sa(list_a);
		else
			ra(list_a);
	}
}

int	find_smallest(t_list *list_a, int *pos)
{
	int	smallest;
	int	count;

	smallest = INT_MAX;
	count = 0;
	while (list_a)
	{
		if (ft_atoi(list_a->content) < smallest)
		{
			smallest = ft_atoi(list_a->content);
			*pos = count;
		}
		count++;
		list_a = list_a->next;
	}
	return (smallest);
}

void	sort_5(t_list **list_a, t_list **list_b)
{
	int	pos;

	if (!is_ordered(*list_a))
	{
		pos = 0;
		while (ft_lstsize(*list_a) > 3)
		{
			while (!is_ordered(*list_a)
				&& ft_atoi((*list_a)->content) != find_smallest(*list_a, &pos))
			{
				if (pos < ft_lstsize(*list_a) / 2)
					ra(list_a);
				else
					rra(list_a);
			}
			pb(list_a, list_b);
		}
		sort_3(list_a);
		pa(list_a, list_b);
		pa(list_a, list_b);
	}
}
