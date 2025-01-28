/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slebik <slebik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 11:02:02 by slebik            #+#    #+#             */
/*   Updated: 2025/01/16 17:30:27 by slebik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	verifdoublon(int ac, char **av)
{
	int	i;
	int	j;

	i = 1;
	if (ac > 2)
	{
		while (i < ac)
		{
			j = i + 1;
			while (j < ac)
			{
				if (ft_strcmp(av[i], av[j]) == 0
					|| (ft_atoimax(av[i]) == 0 && ft_atoimax(av[j]) == 0))
					return (0);
				j++;
			}
			i++;
		}
	}
	return (1);
}

int	verifdoublonarg(char **av)
{
	int	i;
	int	j;

	i = 0;
	while (av[i])
	{
		j = i + 1;
		while (av[j])
		{
			if (ft_strcmp(av[i], av[j]) == 0
				|| (ft_atoimax(av[i]) == 0 && ft_atoimax(av[j]) == 0))
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	verifdigit(int ac, char **av)
{
	int	j;
	int	i;

	i = 1;
	if (ac > 1)
	{
		while (av[i])
		{
			j = 0;
			if (av[i][j] == '+' || av[i][j] == '-')
			{
				j++;
				if (!ft_isdigit(av[i][j]))
					return (0);
			}
			while (av[i][j])
			{
				if (!ft_isdigit(av[i][j]))
					return (0);
				j++;
			}
			i++;
		}
	}
	return (1);
}

int	verifdigitarg(char **av)
{
	int	c;
	int	j;
	int	i;

	i = 0;
	while (av[i])
	{
		j = 0;
		if (av[i][j] == '+' || av[i][j] == '-')
		{
			j++;
			if (!ft_isdigit(av[i][j]))
				return (0);
		}
		while (av[i][j])
		{
			c = av[i][j];
			if (!ft_isdigit(c))
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

t_list	*parsing(int ac, char **av)
{
	int		i;
	int		j;
	t_list	*a;
	char	**tab;

	i = 1;
	a = NULL;
	while (av[i])
	{
		j = 0;
		tab = ft_split(av[i], ' ');
		if (!tab)
			return (ft_lstclear(&a), NULL);
		while (tab[j])
		{
			ft_lstadd_back(&a, ft_lstnew(ft_atoimax(tab[j])));
			if (ft_atoimax(tab[j]) == LONG_MAX || verifdigit(ac, av) == 0
				|| verifdoublon(ac, av) == 0)
				return (error(tab, &a));
			j++;
		}
		ft_free_split(tab);
		i++;
	}
	return (a);
}
