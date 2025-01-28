/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slebik <slebik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 11:40:40 by slebik            #+#    #+#             */
/*   Updated: 2025/01/16 17:31:58 by slebik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*parsingarg(char **av)
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
		while (tab[j])
		{
			ft_lstadd_back(&a, ft_lstnew(ft_atoimax(tab[j])));
			if (ft_atoimax(tab[j]) == LONG_MAX || verifdigitarg(tab) == 0
				|| verifdoublonarg(tab) == 0)
				return (error(tab, &a));
			j++;
		}
		ft_free_split(tab);
		i++;
	}
	return (a);
}

t_list	*error(char **tab, t_list **a)
{
	ft_free_split(tab);
	ft_lstclear(a);
	write(2, "Error\n", 6);
	return (NULL);
}
