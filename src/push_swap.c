/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabd-el- <gabd-el-@student.42wolfsburg.d>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 12:26:29 by gabd-el-          #+#    #+#             */
/*   Updated: 2023/08/25 16:39:20 by gabd-el-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int main(int argc, char **argv)
{
	t_list **a;
	t_list **b;
	char **splitted;

	if (argc < 2)
		error0();
	splitted = NULL;
	a = (t_list **) malloc(sizeof(t_list));
	b = (t_list **) malloc(sizeof(t_list));
	*a = NULL;
	*b = NULL;
	// #1 Check Args
	checkpoint_args(a, b, argc, argv, splitted);
	// #2 Index the stack smallest value to highest
	index_stack(a);
	// #3 Check if sorted otherwise sort and print instructions
	sort(a, b);
	// #4 Free stacks
	free_stack(a);
	free_stack(b);
	return (0);
}