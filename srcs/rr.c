/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rr.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifreire- <ifreire-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 18:30:09 by ifreire-          #+#    #+#             */
/*   Updated: 2022/10/17 16:34:54 by ifreire-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//rr : ra and rb at the same time.

#include "../include/ft_push_swap.h"
#include "../libft/libft.h"

int	rr(t_a *a, t_b *b)
{
	ra_stack(a);
	rb_stack(b);
	return (write(1, "rr\n", 3));
}
