/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusousa <gusousa@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 15:58:43 by gusousa           #+#    #+#             */
/*   Updated: 2022/11/17 14:19:52 by gusousa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"
# include "../ft_printf/ft_printf.h"
# include <limits.h>

void		sa(t_list **lst_a);
void		sb(t_list **lst_b);
void		ss(t_list **lst_a, t_list **lst_b);

void		pa(t_list **lst_b, t_list **lst_a);
void		pb(t_list **lst_a, t_list **lst_b);

void		ra(t_list **lst_a);
void		rb(t_list **lst_b);
void		rr(t_list **lst_a, t_list **lst_b);

void		rra(t_list **lst_a);
void		rrb(t_list **lst_b);
void		rrr(t_list **lst_a, t_list **lst_b);

int			check_arg(char **argv, int argc, char ***args);
long long	ft_atol(const char *nbr);

void		quit(t_list **list, char **args, int error);

void		sort_3(t_list **list_a);
void		sort_5(t_list **list_a, t_list **list_b);
int			is_ordered(t_list *list_a);
void		sort_big(t_list **list_a, t_list **list_b);

#endif
