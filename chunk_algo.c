/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chunk_algo.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slebik <slebik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 14:31:37 by slebik            #+#    #+#             */
/*   Updated: 2025/01/07 14:31:37 by slebik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	chunk_algo(t_list **a, t_list **b)
{
	int		start;
	int		end;
	int		total_size;
	int		size_chunk;

	total_size = listlength(*a);
	size_chunk = ft_sqrt(listlength(*a)) * 1.35;
	start = 0;
	end = size_chunk - 1;
	assign_index_sort(*a);
	while (start < total_size)
	{
		move_chunk_to_b(a, b, start, end);
		start += size_chunk;
		end += size_chunk;
		if (end >= total_size)
			end = total_size - 1;
	}
	while (*b != NULL)
	{
		get_highestb(b);
		pa(a, b);
	}
}

void	move_chunk_to_b(t_list **a, t_list **b, int start, int end)
{
	t_list	*tmp;
	int		elem_in_chunk;
	int		count_in_chunk;

	tmp = *a;
	count_in_chunk = 0;
	elem_in_chunk = 0;
	while (tmp)
	{
		if (tmp->index >= start && tmp->index <= end)
			elem_in_chunk++;
		tmp = tmp->next;
	}
	while (count_in_chunk < elem_in_chunk)
	{
		if ((*a)->index >= start && (*a)->index <= end)
		{
			pb(a, b);
			count_in_chunk++;
		}
		else if (choice_rotate(a, start, end))
			rra(a);
		else
			ra(a);
	}
}

int	choice_rotate(t_list **a, int start, int end)
{
	int		mid;
	int		pos;
	t_list	*tmp;

	pos = 0;
	tmp = *a;
	mid = listlength(*a) / 2;
	while (tmp)
	{
		if (tmp->index >= start && tmp->index <= end)
			return (pos > mid);
		pos++;
		tmp = tmp->next;
	}
	return (0);
}

int	ft_sqrt(int nb)
{
	int	i;

	if (nb < 4)
		return (1);
	i = 2;
	while (i * i < nb)
		i++;
	if (i * i > nb)
	{
		if ((i * i - nb) < ((i - 1) * (i - 1) + (-nb)))
			return (i);
	}
	return (i - 1);
}
