/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slebik <slebik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 16:00:03 by slebik            #+#    #+#             */
/*   Updated: 2025/01/16 10:25:50 by slebik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_five(t_list **a, t_list **b)
{
	get_smallesta(a);
	pb(a, b);
	get_smallesta(a);
	pb(a, b);
	sort_three(a);
	pa(a, b);
	pa(a, b);
	if ((*a)->content > (*a)->next->content)
		sa(a);
}

void	get_highesta(t_list **a)
{
	t_list	*highest;
	t_list	*actual;
	int		mid;

	if (!a || !(*a))
		return ;
	highest = (*a);
	assign_index_pos(highest);
	actual = (*a);
	mid = listlength(*a) / 2;
	if (listlength(*a) % 2 != 0)
		mid++;
	while (actual)
	{
		if (actual->content > highest->content)
			highest = actual;
		actual = actual->next;
	}
	while (*a != highest)
	{
		if (highest->index > mid)
			rra(a);
		else
			ra(a);
	}
}

void	get_highestb(t_list **a)
{
	t_list	*highest;
	t_list	*actual;
	int		mid;

	if (!a || !(*a))
		return ;
	highest = (*a);
	assign_index_pos(highest);
	actual = (*a);
	mid = listlength(*a) / 2;
	if (listlength(*a) % 2 != 0)
		mid++;
	while (actual)
	{
		if (actual->content > highest->content)
			highest = actual;
		actual = actual->next;
	}
	while (*a != highest)
	{
		if (highest->index > mid)
			rrb(a);
		else
			rb(a);
	}
}

void	get_smallesta(t_list **a)
{
	t_list	*smallest;
	t_list	*actual;
	int		mid;

	if (!a || !(*a))
		return ;
	smallest = (*a);
	assign_index_pos(smallest);
	actual = (*a);
	mid = listlength(*a) / 2;
	if (listlength(*a) % 2 != 0)
		mid++;
	while (actual)
	{
		if (actual->content < smallest->content)
			smallest = actual;
		actual = actual->next;
	}
	while (*a != smallest)
	{
		if (smallest->index > mid)
			rra(a);
		else
			ra(a);
	}
}

void	get_smallestb(t_list **a)
{
	t_list	*smallest;
	t_list	*actual;
	int		mid;

	if (!a || !(*a))
		return ;
	smallest = (*a);
	assign_index_pos(smallest);
	actual = (*a);
	mid = listlength(*a) / 2;
	if (listlength(*a) % 2 != 0)
		mid++;
	while (actual)
	{
		if (actual->content < smallest->content)
			smallest = actual;
		actual = actual->next;
	}
	while (*a != smallest)
	{
		if (smallest->index > mid)
			rrb(a);
		else
			rb(a);
	}
}
