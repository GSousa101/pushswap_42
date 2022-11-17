/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusousa <gusousa@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 09:37:50 by gusousa           #+#    #+#             */
/*   Updated: 2022/11/16 19:31:17 by gusousa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

/**
 * Comparar o quantos numeros são menores que ele (definir indice)
 */
char	*find_index(t_list *list_a, int actual_num)
{
	int	index;

	index = 0;
	while (list_a)
	{
		if (actual_num > ft_atoi(list_a->content))
			index++;
		list_a = list_a->next;
	}
	return (ft_itoa(index));
}

/**
 * Eu devo pegar a lista que já tenho
 * pegar indice de cada numero
 * Colocar esse numer atrás em uma outra lista
 * Devolver a lista não organizada, em que os numeros viraram indice
 */
t_list	*categorize_index(t_list **list_a, char ***n_index_char)
{
	t_list	*list_a_move;
	t_list	*new_list_a;
	int		actual_num;
	int		i;

	i = -1;
	new_list_a = NULL;
	list_a_move = *list_a;
	while (list_a_move)
	{
		actual_num = ft_atoi(list_a_move->content);
		*n_index_char[++i] = find_index(*list_a, actual_num);
		ft_lstadd_back(&new_list_a, ft_lstnew(n_index_char));
		list_a_move = list_a_move->next;
	}
	ft_lstclear(list_a, free);
	return (new_list_a);
}

//conto qtd args.
// Adiciono na frente porque começo por trás.
int	receive_value(char **args, t_list **list_a, char ***n_index_char)
{
	int	i;
	int	total_num;

	i = 1;
	while (args[i])
		i++;
	total_num = i;
	while (i--)
		ft_lstadd_front(list_a, ft_lstnew(args[i]));
	*n_index_char = malloc(total_num * sizeof(char *));
	if (n_index_char)
		*list_a = categorize_index(list_a, n_index_char);
	return (total_num);
}

int	main(int argc, char **argv)
{
	t_list	*list_a;
	t_list	*list_b;
	char	**args;
	int		total_num;
	char	**n_index_char;

	args = NULL;
	list_b = NULL;
	if (argc > 1 && argv)
	{
		if (check_arg(argv, argc, &args))
		{
			total_num = receive_value(args, &list_a, &n_index_char);
			if (total_num == 3)
				sort_3(&list_a);
			else if (total_num <= 6)
				sort_5(&list_a, &list_b);
			else
				sort_big(&list_a, &list_b);
		}
		quit(&list_a, args);
	}
	return (0);
}
