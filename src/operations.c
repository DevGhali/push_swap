/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabd-el- <gabd-el-@student.42wolfsburg.d>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 18:49:19 by gabd-el-          #+#    #+#             */
/*   Updated: 2023/08/23 17:23:37 by gabd-el-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

// Swap values between a node and the one next to it
int	swap(t_list **stack)
{
	t_list	*head;
	t_list	*next;
	int		tmp_val;
	int		tmp_index;

	if (lstsize(*stack) < 2)
		return (-1);
	head = *stack;
	next = head->next;
	if (!head && !next)
		error1();
	tmp_val = head->value;
	tmp_index = head->index;
	head->value = next->value;
	head->index = next->index;
	next->value = tmp_val;
	next->index = tmp_index;
	return (0);
}

int	push(t_list **stack_to, t_list **stack_from)
{
	t_list	*tmp;
	t_list	*head_to;
	t_list	*head_from;

	if (lstsize(*stack_from) == 0)
		return (-1);
	head_to = *stack_to;
	head_from = *stack_from;


	tmp = head_from;
	head_from = head_from->next;
	*stack_from = head_from;
	if (!head_to)
	{
		head_to = tmp;
		head_to->next = NULL;
		*stack_to = head_to;
	}
	else
	{
		tmp->next = head_to;
		*stack_to = tmp;
	}
	return (0);
}

int	rotate(t_list **stack)
{
	t_list	*top;
	t_list	*tail;

	if (lstsize(*stack) < 2)
		return (0);
	top = *stack;
	tail = lstlast(top);
	*stack = top->next;
	top->next = NULL;
	tail->next = top;
	return (1);
}

int	reverse_rotate(t_list **stack)
{
	t_list	*top;
	t_list	*tail;

	if (lstsize(*stack) < 2)
		return (0);
	top = *stack;
	tail = lstlast(top);
	while (top)
	{
		if (top->next->next == NULL)
		{
			top->next = NULL;
			break ;
		}
		top = top->next;
	}
	tail->next = *stack;
	*stack = tail;
	return (1);
}



