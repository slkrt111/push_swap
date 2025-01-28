/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slebik <slebik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 14:35:56 by slebik            #+#    #+#             */
/*   Updated: 2025/01/16 10:26:06 by slebik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_three(t_list **a)
{
	int	b;
	int	c;
	int	d;

	b = (*a)->content;
	c = (*a)->next->content;
	d = (*a)->next->next->content;
	if (b > c && b < d && c < d)
		sa(a);
	else if (b > c && b > d && c > d)
	{
		sa(a);
		rra(a);
	}
	else if (b > c && b > d && c < d)
		ra(a);
	else if (b < c && b < d && c > d)
	{
		sa(a);
		ra(a);
	}
	else if (b < c && b > d && c > d)
		rra(a);
}
