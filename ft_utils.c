/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slebik <slebik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 12:12:55 by slebik            #+#    #+#             */
/*   Updated: 2025/01/15 12:12:55 by slebik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_sort(t_list *a)
{
	assign_index_sort(a);
	while (a->next != NULL)
	{
		if (a->index > a->next->index)
			return (0);
		a = a->next;
	}
	return (1);
}

long	ft_atoimax(const char *str)
{
	int		i;
	long	nb;
	int		sign;

	i = 0;
	sign = 1;
	nb = 0;
	while ((str[i] >= 9 && str[i] <= 13) || (str[i] == ' '))
		i++;
	if (str[i] == '-' )
	{
		sign *= -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = nb * 10 + (str[i] - '0');
		i++;
	}
	nb = nb * sign;
	if (nb > INT_MAX || nb < INT_MIN)
		return (LONG_MAX);
	return (nb);
}

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i1;
	int	i2;

	i1 = 0;
	i2 = 0;
	if (s1[i1] == '+')
		i1++;
	if (s2[i2] == '+')
		i2++;
	while (s1[i1] == s2[i2] && (s1[i1] != '\0' || s2[i2] != '\0'))
	{
		i1++;
		i2++;
	}
	return (s1[i1] - s2[i2]);
}
