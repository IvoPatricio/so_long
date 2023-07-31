/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifreire- <ifreire-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 18:29:55 by ifreire-          #+#    #+#             */
/*   Updated: 2022/10/17 16:35:12 by ifreire-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//ra (rotate a): Shift up all elements of stack a by 1.
//The first element becomes the last one

#include "../include/ft_push_swap.h"
#include "../libft/libft.h"

void	ra_stack(t_a *a)
{
	int	i;
	int	temp;

	i = 0;
	temp = a->value[0];
	while (i < a->size - 1)
	{
		a->value[i] = a->value[i + 1];
		i++;
	}
	a->value[a->size - 1] = temp;
}

int	ra(t_a *a)
{
	ra_stack(a);
	return (write(1, "ra\n", 3));
}

/*
int	main(int argc, char **argv)
{
	t_a	a;
	int	i;

	a.value = (int *)malloc(sizeof(int) * (argc));
	a.size = argc - 1;
	i = 0;
	if (argc < 2)
		return (ft_printf("Error\nGive at least 2 arguments"));
	while (argc > 1)
	{
		a.value[i] = ft_atoi(argv[i+1]);
		argc--;
		i++;
	}
	ra(&a);
	printf_lista(&a, "list A");
}

void	printf_lista(t_a	*stack, char *title)
{
	int	i;

	i = 0;
	printf("========%s=======\n", title);
	while (i < stack->size)
		printf("%d\n", stack->value[i++]);
}*/