/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifreire- <ifreire-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 18:29:42 by ifreire-          #+#    #+#             */
/*   Updated: 2022/10/17 16:35:14 by ifreire-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//pb (push b): Take the first element at the top 
//of a and put it at the top of b.
//Do nothing if a is empty

#include "../include/ft_push_swap.h"
#include "../libft/libft.h"

int	pb_rest(t_b *b, int temp)
{
	int	*numb;
	int	i;

	i = 1;
	b->size++;
	numb = (int *)malloc(sizeof(int) * (b->size + 1));
	if (!numb)
		return (1);
	numb[0] = temp;
	while (i < b->size)
	{
		numb[i] = b->value[i - 1];
		i++;
	}
	numb[i] = 0;
	free(b->value);
	b->value = numb;
	return (0);
}

int	pb(t_a *a, t_b *b)
{
	int	i;
	int	temp;
	int	*var;

	if (a->size < 1)
		return (write(1, "pb\n", 3));
	var = (int *)malloc(sizeof(int) * (a->size));
	if (!var)
		return (1);
	temp = a->value[0];
	i = 0;
	while ((i + 1) < a->size)
	{
		var[i] = a->value[i + 1];
		i++;
	}
	var[i] = 0;
	a->size--;
	free(a->value);
	a->value = var;
	a->value[a->size] = 0;
	pb_rest(b, temp);
	return (write(1, "pb\n", 3));
}

/*
int	main(int argc, char **argv)
{
	t_a	a;
	t_b	b;
	int	i;

	a.value = (int *)malloc(sizeof(int) * (argc));
	a.size = argc - 1;
	b.size = 3;
	b.value[0] = 1;
	b.value[1] = 2;
	b.value[2] = 3;
	i = 0;
	if (argc < 2)
		return (ft_printf("Error\nGive at least 2 arguments"));
	while (argc > 1)
	{
		a.value[i] = ft_atoi(argv[i+1]);
		argc--;
		i++;
	}
	pb(&a, &b);
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
	ft_printf("========%s=======\n", title);
	while (i < stack->size)
		ft_printf("%d\n", stack->value[i++]);
}*/