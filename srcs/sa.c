/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifreire- <ifreire-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 18:31:21 by ifreire-          #+#    #+#             */
/*   Updated: 2022/10/17 16:34:42 by ifreire-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//sa (swap a): Swap the first 2 elements at the top of stack a.
//Do nothing if there is only one or no elements.

#include "../include/ft_push_swap.h"
#include "../libft/libft.h"

int	sa_stack(t_a *a)
{
	int	temp;

	temp = a->value[0];
	a->value[0] = a->value[1];
	a->value[1] = temp;
	return (0);
}

int	sa(t_a *a)
{
	if (a->size < 2)
		return (write(1, "sa\n", 3));
	sa_stack(a);
	return (write(1, "sa\n", 3));
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
	sa(&a);
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