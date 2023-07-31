/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo100_500.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifreire- <ifreire-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 15:06:33 by ifreire-          #+#    #+#             */
/*   Updated: 2022/10/17 18:54:22 by ifreire-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/ft_push_swap.h"
#include "libft/libft.h"

void	final_algo_loop(t_a *a, t_b *b, t_algo *l, int value)
{
	if (a->value[0] <= value)
	{
		pb(a, b);
		l->index++;
	}
	else
		ra(a);
}

void	mid_algo_loop(t_a *a, t_b *b, t_algo *l, int value)
{
	if ((a->value[0] > value) & (a->value[0] <= (value + l->p)))
	{
		pb(a, b);
		l->index++;
	}
	else
		ra(a);
}

void	first_algo_loop(t_a *a, t_b *b, t_algo *l, int value)
{
	if (a->value[0] > (value))
	{
		pb(a, b);
		l->index++;
	}
	else
		ra(a);
}

void	algo_500(t_a *a, t_b *b, t_algo *l)
{	
	int	sobra;

	l->p = a->size / 5;
	sobra = a->size % 5;
	l->index = 0;
	while (l->index < (l->p + sobra))
		first_algo_loop(a, b, l, l->p * 4);
	stack_b_order(a, b, l);
	l->index = 0;
	while (l->index < l->p)
		mid_algo_loop(a, b, l, l->p * 3);
	stack_b_order(a, b, l);
	l->index = 0;
	while (l->index < l->p)
		mid_algo_loop(a, b, l, l->p * 2);
	stack_b_order(a, b, l);
	l->index = 0;
	while (l->index < l->p)
		mid_algo_loop(a, b, l, l->p);
	stack_b_order(a, b, l);
	l->index = 0;
	while (l->index < l->p)
		final_algo_loop(a, b, l, l->p);
	stack_b_order(a, b, l);
}

void	algo_100(t_a *a, t_b *b, t_algo *l)
{	
	int	sobra;

	l->p = a->size / 3;
	sobra = a->size % 3;
	l->index = 0;
	while (l->index < (l->p + sobra))
		first_algo_loop(a, b, l, l->p * 2);
	stack_b_order(a, b, l);
	l->index = 0;
	while (l->index < l->p)
		mid_algo_loop(a, b, l, l->p);
	stack_b_order(a, b, l);
	l->index = 0;
	while (l->index < l->p)
		final_algo_loop(a, b, l, l->p);
	stack_b_order(a, b, l);
}
