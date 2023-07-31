/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo3_5.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifreire- <ifreire-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 15:06:27 by ifreire-          #+#    #+#             */
/*   Updated: 2022/10/17 17:14:58 by ifreire-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/ft_push_swap.h"
#include "libft/libft.h"

void	algo_3(t_a *a)
{
	if ((a->value[0] > a->value[1]) & (a->value[1] < a->value[2]) \
			& (a->value[2] > a->value[0]))
		sa(a);
	if ((a->value[0] > a->value[1]) & (a->value[1] > a->value[2]) \
			& (a->value[2] < a->value[0]))
	{
		sa(a);
		rra(a);
	}
	if ((a->value[0] > a->value[1]) & (a->value[1] < a->value[2]) \
			& (a->value[2] < a->value[0]))
		ra(a);
	if ((a->value[0] < a->value[1]) & (a->value[1] > a->value[2]) \
			& (a->value[2] > a->value[0]))
	{
		sa(a);
		ra(a);
	}
	if ((a->value[0] < a->value[1]) & (a->value[1] > a->value[2]) \
			& (a->value[2] < a->value[0]))
		rra(a);
}

void	rest_algo(t_a *a, t_algo *l)
{
	if (l->temp == a->value[0] && l->temp != INT_MAX)
		;
	else if (l->z < l->cal)
	{
		while (l->z > 0)
		{
			ra(a);
			l->z--;
		}
	}
	else
	{
		while (l->cal > 0)
		{
			rra(a);
			l->cal--;
		}
	}
	l->i = 0;
	l->z = 0;
}

void	algo_5_loop(t_a *a, t_algo *l)
{
	l->temp = INT_MAX;
	if (a->value[0] > a->value[1] && a->value[1])
		sa(a);
	while (a->value[l->i] && l->i < a->size)
	{
		if (l->temp > a->value[l->i] && a->size - 1)
		{
			l->temp = a->value[l->i];
			if (l->temp == a->value[l->i])
				l->z = l->i;
		}
		l->i++;
	}
}

void	algo_5(t_a *a, t_b *b, t_algo *l)
{
	l->x = 0;
	memset(l, 0, (sizeof(&l)));
	while (a->size)
	{
		algo_5_loop(a, l);
		l->cal = l->i - l->z;
		rest_algo(a, l);
		l->x++;
		pb(a, b);
		if (l->x == 2)
			break ;
	}
	algo_3(a);
	while ((b->size))
		pa(a, b);
}

void	algo_main(t_a *a, t_b *b, t_algo *l)
{
	memset(l, 0, (sizeof(&l)));
	while (a->size)
	{
		l->temp = INT_MAX;
		if (a->value[0] > a->value[1] && a->value[1])
			sa(a);
		while (a->value[l->i] && l->i < a->size)
		{
			if (l->temp > a->value[l->i] && a->size - 1)
			{
				l->temp = a->value[l->i];
				if (l->temp == a->value[l->i])
					l->z = l->i;
			}
			l->i++;
		}
		l->cal = l->i - l->z;
		rest_algo(a, l);
		pb(a, b);
	}
	while ((b->size))
		pa(a, b);
}
