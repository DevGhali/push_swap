/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabd-el- <gabd-el-@student.42wolfsburg.d>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 12:27:17 by gabd-el-          #+#    #+#             */
/*   Updated: 2023/08/25 14:32:31 by gabd-el-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <fcntl.h>

# define INT_MAX 2147483647
# define INT_MIN  (-2147483648)


typedef struct s_list
{
	int				value;
	int				index;
	struct s_list	*next;
}				t_list;

// handle_args.c
int		check_4_doubles(int num, int i, char **splitted);
void	checkpoint_args(t_list **a, t_list **b, int argc, char **argv, char **splitted);

// index.c
t_list	*next_min(t_list **stack);
void	index_stack(t_list **stack);

// sort.c
void	sort(t_list **a, t_list **b);
int		is_sorted(t_list **stack);

// instructions.c
int	sa(t_list **stack_a);
int	sb(t_list **stack_b);
int	ss(t_list **stack_a, t_list **stack_b);
int	pa(t_list **stack_a, t_list **stack_b);
int	pb(t_list **stack_a, t_list **stack_b);
int	ra(t_list **stack_a);
int	rb(t_list **stack_b);
int	rr(t_list **stack_a, t_list **stack_b);
int	rra(t_list **stack_a);
int	rrb(t_list **stack_b);
int	rrr(t_list **stack_a, t_list **stack_b);

// operations.c
int		swap(t_list **stack);
int	push(t_list **stack_to, t_list **stack_from);
int		rotate(t_list **stack);
int		reverse_rotate(t_list **stack);


// simple_sort.c
int	get_distance(t_list **stack, int index);
int get_min_index(t_list **stack, int val);
void	sort3(t_list **a);
void	sort4(t_list **stack_a, t_list **stack_b);
void	sort5(t_list **stack_a, t_list **stack_b);
void    simple_sort(t_list **a, t_list **b);

// radix_sort.c
void	radix_sort(t_list **stack_a, t_list **stack_b);


// utils.c
void	error1();
void	error0();
void	free_arr(char **arr);
void	free_stack(t_list **stack);

// t_list.c
t_list	*lstnew(int value);
void	lstadd_front(t_list **lst, t_list *new);
t_list	*lstlast(t_list *head);
void	lstadd_back(t_list **lst, t_list *new);
int		lstsize(t_list *head);
void	printList(t_list *head);

#endif