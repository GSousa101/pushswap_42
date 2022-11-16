/**************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusousa <gusousa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 11:34:17 by gusousa           #+#    #+#             */
/*   Updated: 2022/11/16 16:59:49 by gusousa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

long long	ft_atol(const char *nbr)
{
	int		count;
	int		signal;
	long long	nbrnbr;

	count = 0;
	while (nbr[count] == ' '
		|| nbr[count] == '\f'
		|| nbr[count] == '\n'
		|| nbr[count] == '\r'
		|| nbr[count] == '\t'
		|| nbr[count] == '\v')
		count++;
	signal = 1;
	if (nbr[count] == '-')
		signal = -1;
	if (nbr[count] == '-' || nbr[count] == '+')
		count++;
	nbrnbr = 0;
	while (ft_isdigit(nbr[count]))
		nbrnbr = nbrnbr * 10 + nbr[count++] - '0';
	return (nbrnbr * signal);
}
