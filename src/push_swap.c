/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusousa <gusousa@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 09:37:50 by gusousa           #+#    #+#             */
/*   Updated: 2022/10/18 15:59:23 by gusousa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

/**
 * Conta os índices do argumento
 * *
void	receive_value(char **argv, t_list **list_a)
{
	int		i;
	
	i = 1;
	while (argv[i])
		i++;
	while (--i)
		ft_lstadd_front(list_a, ft_lstnew(argv[i]));
	list_a = distribute_index(list_a);
}*/

int	is_digit_ascii(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

/**
 * Procura por valores duplicados
 * procura por algo diferente de numero
 */
int	check_arg(char **argv)
{
	char	**args;

	args = ft_split(argv[1], ' ');
	while (*args)
	{
		while (**args)
		{
			if (!ft_isdigit(**args) && **args)
				return (0);
			(*args)++;
		}
		args++;
	}
	return (1);
}

// Checar se é valido
// Receber os valores de argv
// organizar 3
// organizar 5
// organizar all
int	main(int argc, char **argv)
{
//	t_list	*list_a;
	t_list	*list_b;

	list_b = NULL;
	if (argc > 1 && argv)
		if (check_arg(argv))
		{
			/*receive_value(argv, &list_a);
			if (argc == 4)
				sort_3(&list_a);
			else if (argc <= 6)
				sort_5(&list_a, &list_b);
			else
				sort_big(&list_a, list_b);
*/
			ft_printf("Done");
		}
	return (0);
}
