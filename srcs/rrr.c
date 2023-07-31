/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrr.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifreire- <ifreire-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 18:31:16 by ifreire-          #+#    #+#             */
/*   Updated: 2022/10/17 16:34:47 by ifreire-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//rrr : rra and rrb at the same time.

#include "../include/ft_push_swap.h"
#include "../libft/libft.h"

int	rrr(t_a *a, t_b *b)
{
	rra_stack(a);
	rrb_stack(b);
	return (write(1, "rrr\n", 4));
}
