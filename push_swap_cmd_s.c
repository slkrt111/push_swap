/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_cmd_s.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slebik <slebik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 14:30:33 by slebik            #+#    #+#             */
/*   Updated: 2025/01/16 10:21:12 by slebik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_list **a)
{
	int	tmp;

	if (!a || !(*a))
		return ;
	tmp = (*a)->content;
	(*a)->content = (*a)->next->content;
	(*a)->next->content = tmp;
	write (1, "sa\n", 3);
}

void	sas(t_list **a)
{
	int	tmp;

	if (!a || !(*a))
		return ;
	tmp = (*a)->content;
	(*a)->content = (*a)->next->content;
	(*a)->next->content = tmp;
}

void	sb(t_list **b)
{
	int	tmp;

	if (!b || !(*b))
		return ;
	tmp = (*b)->content;
	(*b)->content = (*b)->next->content;
	(*b)->next->content = tmp;
	write (1, "sb\n", 3);
}

void	sbs(t_list **b)
{
	int	tmp;

	if (!b || !(*b))
		return ;
	tmp = (*b)->content;
	(*b)->content = (*b)->next->content;
	(*b)->next->content = tmp;
}

void	ss(t_list **a, t_list **b)
{
	sas(a);
	sbs(b);
	write (1, "ss\n", 3);
}
