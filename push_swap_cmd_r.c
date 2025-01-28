/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_cmd_r.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slebik <slebik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 11:30:32 by slebik            #+#    #+#             */
/*   Updated: 2025/01/16 10:20:40 by slebik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_list **a)
{
	t_list	*tmp;
	t_list	*nhead;

	if (!a || !(*a))
		return ;
	tmp = *a;
	nhead = (*a)->next;
	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = (*a);
	(*a)->next = NULL;
	*a = nhead;
	write (1, "ra\n", 3);
}

void	ras(t_list **a)
{
	t_list	*tmp;
	t_list	*nhead;

	if (!a || !(*a))
		return ;
	tmp = *a;
	nhead = (*a)->next;
	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = (*a);
	(*a)->next = NULL;
	*a = nhead;
}

void	rb(t_list **b)
{
	t_list	*tmp;
	t_list	*nhead;

	if (!b || !(*b))
		return ;
	tmp = *b;
	nhead = (*b)->next;
	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = (*b);
	(*b)->next = NULL;
	*b = nhead;
	write (1, "rb\n", 3);
}

void	rbs(t_list **b)
{
	t_list	*tmp;
	t_list	*nhead;

	if (!b || !(*b))
		return ;
	tmp = *b;
	nhead = (*b)->next;
	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = (*b);
	(*b)->next = NULL;
	*b = nhead;
}

void	rr(t_list **a, t_list **b)
{
	ras(a);
	rbs(b);
	write (1, "rr\n", 3);
}
