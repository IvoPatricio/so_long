/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifreire- <ifreire-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 18:30:34 by ifreire-          #+#    #+#             */
/*   Updated: 2022/10/17 16:34:31 by ifreire-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//sb (swap b): Swap the first 2 elements at the top of stack b.
//Do nothing if there is only one or no elements.

#include "../include/ft_push_swap.h"
#include "../libft/libft.h"

int	sb_stack(t_b *b)
{
	int	temp;

	temp = b->value[0];
	b->value[0] = b->value[1];
	b->value[1] = temp;
	return (0);
}

int	sb(t_b *b)
{
	if (b->size < 2)
		return (write(1, "sb\n", 3));
	sb_stack(b);
	return (write(1, "sb\n", 3));
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
	sb(&b);
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
