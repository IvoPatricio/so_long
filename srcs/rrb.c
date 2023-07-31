/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrb.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifreire- <ifreire-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 18:30:18 by ifreire-          #+#    #+#             */
/*   Updated: 2022/10/17 16:34:49 by ifreire-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//rrb (reverse rotate b): Shift down all elements of stack b by 1.
//The last element becomes the first one.

#include "../include/ft_push_swap.h"
#include "../libft/libft.h"

void	rrb_stack(t_b *b)
{
	int	i;
	int	temp;

	i = b->size - 1;
	temp = b->value[b->size - 1];
	while (i >= 1)
	{
		b->value[i] = b->value[i - 1];
		i--;
	}
	b->value[i] = temp;
}

int	rrb(t_b *b)
{
	rrb_stack(b);
	return (write(1, "rrb\n", 4));
}

/*
int	main(int argc, char **argv)
{
	t_b	b;
	int	i;

	b.value = (int *)malloc(sizeof(int) * (argc));
	b.size = argc - 1;
	i = 0;
	if (argc < 2)
		return (ft_printf("Error\nGive at least 2 arguments"));
	while (argc > 1)
	{
		b.value[i] = ft_atoi(argv[i+1]);
		argc--;
		i++;
	}
	rrb(&b);
	printf_listb(&b, "list B");
}

void	printf_listb(t_b *stack, char *title)
{
	int	i;

	i = 0;
	ft_printf("========%s=======\n", title);
	while (i < stack->size)
		ft_printf("%d\n", stack->value[i++]);
}*/