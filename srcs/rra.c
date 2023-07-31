/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifreire- <ifreire-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 18:31:09 by ifreire-          #+#    #+#             */
/*   Updated: 2022/10/17 16:34:52 by ifreire-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//rra (reverse rotate a): Shift down all elements of stack a by 1.
//The last element becomes the first one.

#include "../include/ft_push_swap.h"
#include "../libft/libft.h"

void	rra_stack(t_a *a)
{
	int	i;
	int	temp;

	i = a->size - 1;
	temp = a->value[a->size - 1];
	while (i >= 1)
	{
		a->value[i] = a->value[i - 1];
		i--;
	}
	a->value[i] = temp;
}

int	rra(t_a *a)
{
	rra_stack(a);
	return (write(1, "rra\n", 4));
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
	rra(&a);
	printf_lista(&a, "list A");
}

void	printf_lista(t_a	*stack, char *title)
{
	int	i;

	i = 0;
	ft_printf("========%s=======\n", title);
	while (i < stack->size)
		ft_printf("%d\n", stack->value[i++]);
}
*/