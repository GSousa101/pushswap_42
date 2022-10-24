/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusousa <gusousa@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 09:37:50 by gusousa           #+#    #+#             */
/*   Updated: 2022/10/24 12:33:01 by gusousa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	is_valid_int(char **args)
{
	int	i;

	i = -1;
	while (args[++i])
		if (ft_atol(args[i]) < INT_MIN || ft_atol(args[i]) > INT_MAX)
			return (0);
	return (1);
}

// O problema está que o while de fora é para quando
// o args está separado em split que veio sem ""
// e o de dentro foi para quando veio de split com ""
int	check_dup(char **args)
{
	int	i;
	int	n_num;

	n_num = 0;
	while (args[n_num])
		n_num++;
	i = 0;
	while (args[--n_num])
		while (args[n_num][i + 1])
		{
			if (!ft_strncmp(args[i], args[i + 1], ft_strlen(args[i])))
				return (1);
			i++;
		}
	return (0);
}

int	check_letter(char **args)
{
	int	i;
	int	j;

	i = 0;
	while (args[i])
	{
		j = 0;
		while (args[i][j])
		{
			if (args[i][j] == '-' || args[i][j] == '+')
				j++;
			if (args[i][j] == '-' || args[i][j] == '+')
				return (1);
			if (!ft_isdigit(args[i][j]) && args[i][j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

char	**join_args(int	argc, char **argv, char **args)
{
	int	i;

	i = 0;
	args = malloc(argc * sizeof(char *));
	if (args)
		while (argv[++i])
		{
			args[i - 1] = malloc(ft_strlen(argv[i]));
			if (args[i - 1])
				args[i - 1] = ft_memcpy(args[i - 1], argv[i], ft_strlen(argv[i]));
		}
	return (args);
}

/**
 * Procura por valores duplicados
 * procura por algo diferente de numero
 * entre os max e min de int ##### FALTA ESSE
 * Ver se não é float
 * Checar se já está ordenado
 */
int	check_arg(char **argv, int argc)
{
	char	**args;

	args = NULL;
	if (argc > 2)
		args = join_args(argc, argv, args);
	else
		args = ft_split(argv[1], ' ');
	if (check_letter(args) || check_dup(args) || !is_valid_int(args))
	{	
		ft_printf("Error\n");
		if (check_letter(args))
			ft_printf("The argument is not interger\n");
		if (check_dup(args))
			ft_printf("The argument contains duplicate values\n");
		if (!is_valid_int(args))
			ft_printf("The argument is beyond the value of an interger\n");
		return (0);
	}
	return (1);
	
}
