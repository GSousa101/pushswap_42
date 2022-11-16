/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quit.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusousa <gusousa@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 14:59:26 by gusousa           #+#    #+#             */
/*   Updated: 2022/11/08 19:11:36 by gusousa          ###   ########.fr       */
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
	int	i;

	i = -1;
	if (list)
		ft_lstclear(list, free);
	free(args);
}
