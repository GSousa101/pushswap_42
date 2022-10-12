/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusousa <gusousa@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 15:58:43 by gusousa           #+#    #+#             */
/*   Updated: 2022/10/12 10:38:50 by gusousa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

typedef struct	s_stack
{
	int				content;
	struct s_stack	*next;
}	t_stack;

void	sa(t_list **lst_a);
void	sb(t_list **lst_b);
void	ss(t_list **lst_a, t_list **lst_b);

void	pa(t_list **lst_b, t_list **lst_a);
void	pb(t_list **lst_a, t_list **lst_b);

void	ra(t_list **lst_a);
void	rb(t_list **lst_b);
void	rr(t_list **lst_a, t_list **lst_b);

void	rra(t_list **lst_a);
void	rrb(t_list **lst_b);
void	rrr(t_list **lst_a, t_list **lst_b);

#endif
