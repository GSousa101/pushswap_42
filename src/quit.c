/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quit.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusousa <gusousa@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 14:59:26 by gusousa           #+#    #+#             */
/*   Updated: 2022/11/16 20:03:13 by gusousa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	point_to_null(void *pointer)
{
	if (pointer)
		pointer = NULL;
}

void	quit(t_list **list, char **args)
{
	if (list)
		ft_lstclear(list, free);
	free(args);
}
