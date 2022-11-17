/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quit.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusousa <gusousa@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 14:59:26 by gusousa           #+#    #+#             */
/*   Updated: 2022/11/17 14:20:12 by gusousa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	quit(t_list **list, char **args, int error)
{
	int	i;

	i = -1;
	if (list)
		ft_lstclear(list, free);
	if (error == 1)
		while (args[++i])
			free(args[i]);
	free(args);
	exit (0);
}
