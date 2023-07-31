/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifreire- <ifreire-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 19:01:47 by ifreire-          #+#    #+#             */
/*   Updated: 2022/10/17 17:25:23 by ifreire-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/ft_push_swap.h"
#include "libft/libft.h"

void	lowernumbers_rest(t_a *a, t_algo *l)
{
	while (l->counter < a->size + 1)
	{
		l->lowest = INT_MAX;
		while (l->i < a->size)
		{
			if ((l->lowest > a->value[l->i]) & (l->save[l->i] == 0))
			{
				l->lowest = a->value[l->i];
				l->int_choise = l->i;
			}
			l->i++;
		}
		l->i = 0;
		l->save[l->int_choise] = l->counter;
		l->counter++;
	}
}

void	lowernumbers(t_a *a, t_algo *l)
{
	l->i = 0;
	l->sizes = 0;
	l->save = (int *)malloc(sizeof(int) * (a->size));
	while (l->i < a->size)
		l->save[l->i++] = 0;
	l->i = 0;
	l->counter = 1;
	lowernumbers_rest(a, l);
	l->sizes = 0;
	while (l->sizes < a->size)
	{
		a->value[l->sizes] = l->save[l->sizes];
		l->sizes++;
	}
	free(l->save);
}

void	call_algo(t_a *a, t_b *b, t_algo *l)
{
	lowernumbers(a, l);
	if (a->size == 3)
		algo_3(a);
	else if (a->size == 5)
		algo_5(a, b, l);
	else if (a->size < 90)
		algo_main(a, b, l);
	else if (a->size >= 90 && a->size < 500)
		algo_100(a, b, l);
	else if (a->size >= 500)
		algo_500(a, b, l);
}

void	checker_string_int(t_a *a, t_b *b, t_algo *l, char **argv)
{
	int	i;

	i = 0;
	if (checker_string(argv[1]) == 0)
	{
		a->value = (int *)malloc(sizeof(int) * (a->size + 1));
		a->value[a->size] = 0;
		while (i < a->size)
		{
			if (checker_int(argv[l->i + 1]) == 1)
				free_error_msg(a, b);
			a->value[l->i] = ft_atoi(argv[l->i + 1]);
			i++;
			l->i++;
		}
	}
	else
	{
		if (split_string(a, l, argv[l->i + 1]) == 1)
			free_error_msg(a, b);
	}
}

int	main(int argc, char **argv)
{
	t_a		a;
	t_b		b;
	t_algo	l;

	if (argc < 2)
		return (1);
	a.size = argc - 1;
	b.value = (int *)malloc(sizeof(int));
	b.size = 0;
	l.i = 0;
	checker_string_int(&a, &b, &l, argv);
	if (ft_repeat(&a) == 1)
		free_error_msg(&a, &b);
	if (check_order(&a, &l) == 1)
		call_algo(&a, &b, &l);
	free_all(&a, &b);
}

/*
void	printf_listl(t_algo	*stack, char *title)
{
	int	i;
	int	x = 5;

	i = 0;
	printf("========%s=======\n", title);
	while (i < x)
		printf("%d\n", stack->value[i++]);
}

void	printf_lista(t_a	*stack, char *title)
{
	int	i;

	i = 0;
	printf("========%s=======\n", title);
	while (i < stack->size)
		printf("%d\n", stack->value[i++]);
}

void	printf_listb(t_b *stack, char *title)
{
	int	i;

	i = 0;
	printf("========%s=======\n", title);
	while (i < stack->size)
		printf("%d\n", stack->value[i++]);
}*/