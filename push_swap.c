/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slebik <slebik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 14:33:15 by slebik            #+#    #+#             */
/*   Updated: 2025/01/16 11:23:42 by slebik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char *av[])
{
	t_list	*a;
	t_list	*b;

	if (ac <= 2 && ac < 1)
		return (write(2, "Error\n", 6));
	if (ac > 2)
		a = parsing(ac, av);
	else
		a = parsingarg(av);
	if (a == NULL)
		return (0);
	b = NULL;
	if (is_sort(a) == 1 || a == NULL)
	{
		ft_lstclear(&a);
		return (0);
	}
	if (listlength(a) == 3)
		sort_three(&a);
	else if (listlength(a) == 5)
		sort_five(&a, &b);
	else
		chunk_algo(&a, &b);
	ft_lstclear(&a);
}
