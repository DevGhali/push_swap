/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabd-el- <gabd-el-@student.42wolfsburg.d>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 14:50:33 by gabd-el-          #+#    #+#             */
/*   Updated: 2023/08/23 17:16:37 by gabd-el-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

t_list	*next_min(t_list **stack)
{
	t_list	*head;
	t_list	*min;
	int		flag;

	head = *stack;
	min = NULL;
	flag = 0;
	if (head)
	{
		while (head)
		{
			if ((head->index == -1) && (!flag || head->value < min->value))
			{
				min = head;
				flag = 1;
			}
			head = head->next;
		}
	}
	return (min);
}

void	index_stack(t_list **stack)
{
	t_list	*head;
	int		index;

	index = 0;
	head = next_min(stack);
	while (head)
	{
		head->index = index++;
		head = next_min(stack);
	}
}

