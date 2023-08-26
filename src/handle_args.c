/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_args.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabd-el- <gabd-el-@student.42wolfsburg.d>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 14:45:29 by gabd-el-          #+#    #+#             */
/*   Updated: 2023/08/24 18:56:29 by gabd-el-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	check_4_doubles(int num, int i, char **splitted)
{
	while (splitted[i])
	{
		if (ft_atoi(splitted[i]) == num)
			return (0);
		i++;
	}
	return (1);
}

static int	ft_arrlen(char **arr)
{
	int len;

	len = 0;
	while (arr[len] != NULL)
		len++;
	return (len);
}

void	checkpoint_args(t_list **a, t_list **b, int argc, char **argv, char **splitted)
{
	t_list	*tmp;
	long	extracted_num;
	int		i;

	i = 0;
	if (argc == 2)
		splitted = ft_split(argv[1], ' ');
	else
	{
		i = 1;
		splitted = argv;
	}
	while (splitted[i])
	{
		extracted_num = ft_atoi(splitted[i]);
		if (extracted_num < INT_MIN || extracted_num > INT_MAX)
			break ;
		if (!ft_isnum(splitted[i]) || !check_4_doubles(extracted_num, i + 1, splitted))
			break ;
		tmp = lstnew(extracted_num);
		lstadd_back(a, tmp);
		i++;
	}
	if (i != ft_arrlen(splitted))
	{
		if (argc == 2)
			free_arr(splitted);
		free_stack(a);
		free_stack(b);
		error1();
	}
	if (argc == 2)
		free_arr(splitted);
}