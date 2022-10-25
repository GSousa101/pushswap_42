/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quit.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusousa <gusousa@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 14:59:26 by gusousa           #+#    #+#             */
/*   Updated: 2022/10/25 12:01:05 by gusousa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	point_to_null(void *pointer)
{
	if (pointer)
		pointer = NULL;
}

void	quit(t_list **list)
{
	if (list)
		ft_lstclear(list, free);
}
