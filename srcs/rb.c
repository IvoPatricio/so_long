/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifreire- <ifreire-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 18:31:00 by ifreire-          #+#    #+#             */
/*   Updated: 2022/10/17 16:34:57 by ifreire-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// rb (rotate b): Shift up all elements of stack b by 1.
// The first element becomes the last one.

#include "../include/ft_push_swap.h"
#include "../libft/libft.h"

void	rb_stack(t_b *b)
{
	int	i;
	int	temp;

	i = 0;
	temp = b->value[0];
	while (i < b->size - 1)
	{
		b->value[i] = b->value[i + 1];
		i++;
	}
	b->value[b->size - 1] = temp;
}

int	rb(t_b *b)
{
	rb_stack(b);
	return (write(1, "rb\n", 3));
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
	rb(&b);
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