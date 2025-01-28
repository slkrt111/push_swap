/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slebik <slebik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 14:26:01 by slebik            #+#    #+#             */
/*   Updated: 2025/01/16 17:20:05 by slebik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdarg.h>
# include <stdbool.h>
# include <stdlib.h>
# include <limits.h>
# include <stdio.h>

typedef struct s_list {
	int				content;
	int				index;
	struct s_list	*next;
}t_list;

int		ft_strcmp(char *s1, char *s2);
void	sa(t_list **a);
void	sas(t_list **a);
void	sb(t_list **b);
void	sbs(t_list **b);
void	ss(t_list **a, t_list **b);
void	pa(t_list **a, t_list **b);
void	pb(t_list **a, t_list **b);
void	ra(t_list **a);
void	ras(t_list **a);
void	rb(t_list **b);
void	rbs(t_list **b);
void	rr(t_list **a, t_list **b);
void	rra(t_list **a);
void	rras(t_list **a);
void	rrb(t_list **b);
void	rrbs(t_list **b);
void	rrr(t_list **a, t_list **b);
char	**ft_split(char const *s, char c);
long	ft_atoimax(const char *str);
int		ft_isdigit(int c);
t_list	*ft_lstnew(int content);
int		ft_lstsize(t_list *lst);
t_list	*ft_lstlast(t_list *lst);
void	ft_lstadd_back(t_list **lst, t_list *new);
int		verifdoublon(int ac, char **av);
int		verifdigit(int ac, char **av);
int		verifdoublonarg(char **av);
int		verifdigitarg(char **av);
t_list	*parsing(int ac, char **av);
t_list	*parsingarg(char **av);
t_list	*error(char **tab, t_list **a);
void	ft_lstclear(t_list **lst);
int		*sortintab(int *tab, int size);
int		listlength(t_list *a);
void	assign_index_sort(t_list *a);
void	sort_three(t_list **a);
void	sort_five(t_list **a, t_list **b);
void	get_highesta(t_list **a);
void	get_highestb(t_list **a);
void	get_smallesta(t_list **a);
void	get_smallestb(t_list **a);
void	assign_index_pos(t_list *a);
int		count_mouv(t_list *newtop, t_list **a);
void	totop(t_list *hold_first, t_list **a);
int		ft_sqrt(int nb);
t_list	*copy_list(t_list *src);
void	assign_index_sort_recursive(t_list *a, int *tab, int j, int i);
int		count_rotation(t_list *lb, int index);
void	move_chunk_to_b(t_list **a, t_list **b, int start, int end);
void	chunk_algo(t_list **a, t_list **b);
int		is_sort(t_list *a);
void	ft_free_split(char **tab);
int		choice_rotate(t_list **a, int start, int end);

#endif