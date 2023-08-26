/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabd-el- <gabd-el-@student.42wolfsburg.d>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 14:54:08 by gabd-el-          #+#    #+#             */
/*   Updated: 2023/08/24 20:34:30 by gabd-el-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	is_sorted(t_list **stack)
{
	t_list	*head;

	head = *stack;
	while (head && head->next)
	{
		if (head->value > head->next->value)
			return (0);
		head = head->next;
	}
	return (1);
}

void	sort(t_list **a, t_list **b)
{
	if (is_sorted(a))
	{
		free_stack(a);
		free_stack(b);
		error0();
	}
	if (lstsize(*a) > 5)
		radix_sort(a, b);
	else
		simple_sort(a, b);
}