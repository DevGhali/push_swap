/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabd-el- <gabd-el-@student.42wolfsburg.d>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 16:44:17 by gabd-el-          #+#    #+#             */
/*   Updated: 2023/08/24 18:55:52 by gabd-el-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	error0()
{
	exit(0);
}

void	error1()
{
	write(2, "Error\n", 6);
	exit (1);
}

void	free_arr(char **arr)
{
	int	i;

	i = 0;
	while (arr[i])
		i++;
	while (i >= 0)
	{
		if (arr[i])
			free(arr[i]);
		i--;
	}
	free(arr);
}

void	free_stack(t_list **stack)
{
	t_list	*tmp;

	while (*stack)
	{
		tmp = *stack;
		*stack = (*stack)->next;
		if (tmp)
			free(tmp);
	}
	free(stack);
}