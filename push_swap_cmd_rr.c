/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_cmd_rr.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slebik <slebik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 11:32:27 by slebik            #+#    #+#             */
/*   Updated: 2025/01/16 10:20:58 by slebik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_list **a)
{
	t_list	*tmp;
	t_list	*end;

	if (!a || !(*a))
		return ;
	tmp = (*a);
	end = NULL;
	while (tmp->next != NULL)
	{
		end = tmp;
		tmp = tmp->next;
	}
	end->next = NULL;
	tmp->next = (*a);
	(*a) = tmp;
	write (1, "rra\n", 4);
}

void	rras(t_list **a)
{
	t_list	*tmp;
	t_list	*end;

	if (!a || !(*a))
		return ;
	tmp = (*a);
	end = NULL;
	while (tmp->next != NULL)
	{
		end = tmp;
		tmp = tmp->next;
	}
	end->next = NULL;
	tmp->next = (*a);
	(*a) = tmp;
}

void	rrb(t_list **b)
{
	t_list	*tmp;
	t_list	*end;

	if (!b || !(*b))
		return ;
	tmp = (*b);
	end = NULL;
	while (tmp->next != NULL)
	{
		end = tmp;
		tmp = tmp->next;
	}
	end->next = NULL;
	tmp->next = (*b);
	(*b) = tmp;
	write (1, "rrb\n", 4);
}

void	rrbs(t_list **b)
{
	t_list	*tmp;
	t_list	*end;

	if (!b || !(*b))
		return ;
	tmp = (*b);
	end = NULL;
	while (tmp->next != NULL)
	{
		end = tmp;
		tmp = tmp->next;
	}
	end->next = NULL;
	tmp->next = (*b);
	(*b) = tmp;
}

void	rrr(t_list **a, t_list **b)
{
	rras(a);
	rrbs(b);
	write (1, "rrr\n", 4);
}
