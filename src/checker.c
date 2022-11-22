/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusousa <gusousa@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 09:37:50 by gusousa           #+#    #+#             */
/*   Updated: 2022/11/22 15:23:49 by gusousa          ###   ########.fr       */
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

int	check_dup(char **args)
{
	int	i;
	int	c;

	i = 0;
	while (args[i + 1])
	{
		c = i + 1;
		while (args[c])
		{
			if (ft_atoi(args[i]) == ft_atoi(args[c]))
				return (1);
			c++;
		}
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
			if (!ft_isdigit(args[i][j]))
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

char	**join_args(int argc, char **argv, char **args)
{
	int	i;

	i = 0;
	args = malloc(argc * sizeof(char *) + 1);
	if (args)
	{
		while (argv[++i])
		{
			args[i - 1] = malloc(ft_strlen(argv[i]) + 1);
			if (args[i - 1])
				args[i - 1] = ft_memcpy(args[i - 1], argv[i],
						ft_strlen(argv[i]) + 1);
		}
		args[i - 1] = NULL;
	}
	return (args);
}

int	check_arg(char **argv, int argc, char ***args)
{
	int	i;

	i = -1;
	if (argc > 2)
		*args = join_args(argc, argv, *args);
	else
		*args = ft_split(argv[1], ' ');
	if (!is_valid_int(*args) || check_letter(*args) || check_dup(*args))
	{	
		ft_printf("Error\n");
		return (0);
	}
	return (1);
}
