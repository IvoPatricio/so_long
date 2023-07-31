/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifreire- <ifreire-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 15:06:18 by ifreire-          #+#    #+#             */
/*   Updated: 2022/10/17 16:06:55 by ifreire-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/ft_push_swap.h"
#include "libft/libft.h"

int	check_order(t_a *a, t_algo *l)
{
	int	i;
	int	temp;

	i = 0;
	while (i < (l->i - 1))
	{
		temp = a->value[i];
		if (a->value[i + 1] > temp)
			;
		else
			return (1);
		i++;
	}
	return (0);
}

int	checker_string(char *argv)
{
	int	i;

	i = 0;
	if (argv[0] == '-')
		i++;
	while (argv[i])
	{
		if ((argv[i] >= '0' && argv[i] <= '9'))
			i++;
		else
			return (1);
	}
	return (0);
}

int	ft_repeat(t_a *a)
{
	int	i;
	int	size;
	int	temp;
	int	index;

	i = 0;
	index = 0;
	while (a->value[i])
	{
		temp = a->value[i];
		while (size < a->size)
		{
			if (temp == a->value[size])
			{
				index++;
				if (index >= 2)
					return (1);
			}
			size++;
		}
		index = 0;
		size = 0;
		i++;
	}
	return (0);
}

int	checker_int(char *argv)
{
	int	i;

	i = 0;
	if (argv[0] == '-')
		i++;
	while (argv[i])
	{
		if ((argv[i] >= '0' && argv[i] <= '9')
			|| argv[i] == ' ' || argv[i] == '"')
			i++;
		else
			return (1);
	}
	return (0);
}

int	split_string(t_a *a, t_algo *l, char *str)
{
	int		x;
	int		checker;

	x = 0;
	l->split = ft_split(str, 32);
	while (l->split[x])
		x++;
	a->value = (int *)malloc(sizeof(int) * (x));
	x = 0;
	while (l->split[x])
	{
		checker = checker_int(l->split[x]);
		if (checker == 1)
		{
			free_split(l);
			return (1);
		}
		a->value[x] = ft_atoi(l->split[x]);
		x++;
	}
	a->size = x;
	l->i = x;
	free_split(l);
	return (0);
}
