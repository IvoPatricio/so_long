/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ss.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifreire- <ifreire-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 18:30:42 by ifreire-          #+#    #+#             */
/*   Updated: 2022/10/17 16:34:37 by ifreire-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//ss : sa and sb at the same time.

#include "../include/ft_push_swap.h"
#include "../libft/libft.h"

int	ss(t_a *a, t_b *b)
{
	if (a->size < 2)
		;
	else
		sa_stack(a);
	if (b->size < 2)
		;
	else
		sb_stack(b);
	return (write(1, "ss\n", 3));
}
