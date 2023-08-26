/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   simple_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabd-el- <gabd-el-@student.42wolfsburg.d>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 15:00:39 by gabd-el-          #+#    #+#             */
/*   Updated: 2023/08/23 17:12:18 by gabd-el-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	get_distance(t_list **stack, int index)
{
	t_list	*head;
	int		distance;

	distance = 0;
	head = *stack;
	while (head)
	{
		if (head->index == index)
			break ;
		distance++;
		head = head->next;
	}
	return (distance);
}

int get_min_index(t_list **stack, int val)
{
	t_list  *head;
	int     min;

	head = *stack;
	min = head->index;
	while (head->next)
	{
		head = head->next;
		if ((head->index < min) && head->index != val)
			min = head->index;
	}
	return (min);
}


void	sort3(t_list **a)
{
	t_list *head;
	int     min;
	int     next_min;

	head = *a;
	min = get_min_index(a, -1);
	next_min = get_min_index(a, min);
	if (is_sorted(a))
		return ;
	if (head->index == min && head->next->index != next_min)
	{
		ra(a);
		sa(a);
		rra(a);
	}
	else if (head->index == next_min)
	{
		if (head->next->index == min)
			sa(a);
		else
			rra(a);
	}
	else
	{
		if (head->next->index == min)
			ra(a);
		else
		{
			sa(a);
			rra(a);
		}
	}
}

void	sort4(t_list **a, t_list **b)
{
	int	distance;

	if (is_sorted(a))
		return ;
	distance = get_distance(a, get_min_index(a, -1));
	if (distance == 1)
		ra(a);
	else if (distance == 2)
	{
		ra(a);
		ra(a);
	}
	else if (distance == 3)
		rra(a);
	if (is_sorted(a))
		return ;
	pb(a, b);
	sort3(a);
	pa(a, b);
}

void	sort5(t_list **a, t_list **b)
{
	int	distance;

	distance = get_distance(a, get_min_index(a, -1));
	if (distance == 1)
		ra(a);
	else if (distance == 2)
	{
		ra(a);
		ra(a);
	}
	else if (distance == 3)
	{
		rra(a);
		rra(a);
	}
	else if (distance == 4)
		rra(a);
	if (is_sorted(a))
		return ;
	pb(a, b);
	sort4(a, b);
	pa(a, b);
}

void    simple_sort(t_list **a, t_list **b)
{
	int size;

	size = lstsize(*a);
	if (size == 0 || size == 1)
		error0();
	if (size == 2)
		sa(a);
	else if (size == 3)
		sort3(a);
	else if (size == 4)
		sort4(a, b);
	else if (size == 5)
		sort5(a, b);
}
