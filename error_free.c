/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_free.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifreire- <ifreire-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 16:06:11 by ifreire-          #+#    #+#             */
/*   Updated: 2022/10/17 16:29:58 by ifreire-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/ft_push_swap.h"
#include "libft/libft.h"

void	free_all(t_a *a, t_b *b)
{
	free(a->value);
	free(b->value);
}

void	free_split(t_algo *l)
{
	int	i;

	i = 0;
	while (l->split[i])
	{
		free(l->split[i]);
		i++;
	}
	free(l->split);
}

void	free_error_msg(t_a *a, t_b *b)
{
	free_all(a, b);
	write(1, "Error\n", 6);
	exit (1);
}

void	stack_b_order_rest(t_b *b, t_algo *l)
{
	l->temp = INT_MIN;
	if (b->value[0] < b->value[1] && b->value[1])
		sb(b);
	while (b->value[l->i] && l->i < b->size)
	{
		if (l->temp < b->value[l->i] && b->size - 1)
		{
			l->temp = b->value[l->i];
			if (l->temp == b->value[l->i])
				l->z = l->i;
		}
		l->i++;
	}
	l->cal = l->i - l->z;
}

void	stack_b_order(t_a *a, t_b *b, t_algo *l)
{
	l->count = 0;
	l->i = 0;
	while (b->size)
	{
		stack_b_order_rest(b, l);
		if (l->temp == b->value[0] && l->temp != INT_MIN)
			;
		else if (l->z < l->cal)
		{
			while (l->z-- > 0)
				rb(b);
		}
		else
		{
			while (l->cal-- > 0)
				rrb(b);
		}
		l->i = 0;
		l->z = 0;
		pa(a, b);
	}
}
