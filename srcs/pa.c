/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifreire- <ifreire-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 18:30:51 by ifreire-          #+#    #+#             */
/*   Updated: 2022/10/17 16:35:17 by ifreire-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//pa (push a): Take the first element at the top
//of b and put it at the top of a.
//Do nothing if b is empty.

#include "../include/ft_push_swap.h"
#include "../libft/libft.h"

int	pa_rest(t_a *a, int temp)
{
	int	i;
	int	*numb;

	i = 1;
	a->size++;
	numb = (int *)malloc(sizeof(int) * (a->size + 1));
	if (!numb)
		return (1);
	numb[0] = temp;
	i = 1;
	while (i < a->size)
	{
		numb[i] = a->value[i - 1];
		i++;
	}
	numb[i] = 0;
	free(a->value);
	a->value = numb;
	return (0);
}

int	pa(t_a *a, t_b *b)
{
	int	i;
	int	temp;
	int	*var;

	if (b->size < 1)
		return (write(1, "pa\n", 3));
	var = (int *)malloc(sizeof(int) * (b->size));
	if (!var)
		return (1);
	temp = b->value[0];
	i = 0;
	while ((i + 1) < b->size)
	{
		var[i] = b->value[i + 1];
		i++;
	}
	b->size--;
	free(b->value);
	b->value = var;
	b->value[b->size] = 0;
	pa_rest(a, temp);
	return (write(1, "pa\n", 3));
}
