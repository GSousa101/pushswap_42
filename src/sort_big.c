/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusousa <gusousa@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 14:23:15 by gusousa           #+#    #+#             */
/*   Updated: 2022/11/08 14:25:08 by gusousa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	is_rev_ordered(t_list *list_b)
{
	while (list_b->next)
	{
		if (list_b->content < list_b->next->content)
			return (0);
		list_b = list_b->next;
	}
	return (1);
}

void	radix_my_b(t_list **list_a, t_list **list_b, int msb)
{
	int	i;
	int	size_list_b;

	i = 0;
	size_list_b = ft_lstsize(*list_b);
	while (i++ < size_list_b)
	{
		if (ft_atoi((*list_b)->content) & (1u << msb))
			pa(list_a, list_b);
		else
			rb(list_b);
	}
}

void	radix_my_a(t_list **list_a, t_list **list_b, int msb)
{
	int	i;
	int	size_list_a;

	i = 0;
	size_list_a = ft_lstsize(*list_a);
	while (i++ < size_list_a && !is_ordered(*list_a))
	{
		// Se tiver o bit mais significativivo (maior), fica na A.
		// Se não, vai para B.
		if (ft_atoi((*list_a)->content) & (1u << msb))
			ra(list_a);
		else
			pb(list_a, list_b);
	}
}

int	get_msb(t_list *list_a)
{
	int	msb;
	int	biggest;

	biggest = INT_MIN;
	while (list_a)
	{
		if (biggest < ft_atoi(list_a->content))
			biggest = ft_atoi(list_a->content);
		list_a = list_a->next;
	}
	msb = 0;
	while (biggest)
	{
		biggest = biggest >> 1;
		msb++;
	}
	return (msb);
}

void	sort_big(t_list **list_a, t_list **list_b)
{
	int	pos_msb;
	int	cont;
	pos_msb = get_msb(*list_a);
	cont = pos_msb;
	while (cont)
	{
		radix_my_a(list_a, list_b, pos_msb - cont);
		cont--;
		radix_my_b(list_a, list_b, pos_msb - cont);
	}
	while (*list_b)
		pa(list_a, list_b);
}

/**
 * Classificar pelo msb de cada numero
 *
 * Passa os maiores para lá.
 * Vai formar várias categorias, notorganized entre si
 * Ao passar para o A, vai ficar o menor embaixo.
 * Se eu decidi organizar o contrário vai ficar maior até menor,
 *
void	fut()
{
	
	while (*list_a)
	{
		num = ft_atoi((*list_a)->content);
		while (num)
		{
			num = num << house;
			house++
		}

	}
}
*/
