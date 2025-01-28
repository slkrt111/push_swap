/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   assign_index.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slebik <slebik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 14:06:55 by slebik            #+#    #+#             */
/*   Updated: 2025/01/16 10:17:23 by slebik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	assign_index_sort(t_list *a)
{
	t_list	*actual;
	t_list	*compare;
	int		index;

	actual = a;
	while (actual)
	{
		index = 0;
		compare = a;
		while (compare)
		{
			if (compare->content < actual->content)
				index++;
			compare = compare->next;
		}
		actual->index = index;
		actual = actual->next;
	}
}

void	assign_index_pos(t_list *a)
{
	int	j;

	if (!a)
		return ;
	j = 0;
	while (a)
	{
		a->index = j;
		a = a->next;
		j++;
	}
}

int	listlength(t_list *a)
{
	int	i;

	i = 0;
	if (a == NULL)
		return (i);
	while (a)
	{
		a = a->next;
		i++;
	}
	return (i);
}
