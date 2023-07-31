/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifreire- <ifreire-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 16:10:24 by ifreire-          #+#    #+#             */
/*   Updated: 2022/10/17 15:59:29 by ifreire-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PUSH_SWAP_H
# define FT_PUSH_SWAP_H

# include<unistd.h>
# include<stdio.h>
# include<stdlib.h>
# include<string.h>
# include<stdarg.h>
# include<sys/types.h>
# include<sys/stat.h>
# include<fcntl.h>
# include<limits.h>

typedef struct s_var_algo
{
	int		p;
	int		i;
	int		x;
	int		z;
	int		count;
	int		temp;
	int		cal;
	int		size;
	int		lowest;
	int		counter;
	int		sizes;
	int		int_choise;
	int		index;
	int		sobra;
	int		*save;
	int		*value;
	char	**split;
}				t_algo;

typedef struct s_stack_a
{
	int		*value;
	int		size;
}				t_a;

typedef struct s_stack_b
{
	int		*value;
	int		size;
}				t_b;

int		sa(t_a *a);
int		sa_stack(t_a *a);
int		sb(t_b *b);
int		sb_stack(t_b *b);
int		ss(t_a *a, t_b *b);
int		rra(t_a *a);
void	rra_stack(t_a *a);
int		rrb(t_b *b);
void	rrb_stack(t_b *b);
int		rrr(t_a *a, t_b *b);
int		rb(t_b *b);
void	rb_stack(t_b *b);
int		ra(t_a *a);
void	ra_stack(t_a *a);
int		rr(t_a *a, t_b *b);
int		pb(t_a *a, t_b *b);
int		pa(t_a *a, t_b *b);
int		checker_string(char *argv);
int		ft_repeat(t_a *a);
int		checker_int(char *argv);
int		split_string(t_a *a, t_algo *l, char *str);
int		check_order(t_a *a, t_algo *l);
void	algo_3(t_a *a);
void	algo_5_loop(t_a *a, t_algo *l);
void	algo_5(t_a *a, t_b *b, t_algo *l);
void	rest_algo(t_a *a, t_algo *l);
void	algo_main(t_a *a, t_b *b, t_algo *l);
void	stack_b_order(t_a *a, t_b *b, t_algo *l);
void	final_algo_loop(t_a *a, t_b *b, t_algo *l, int value);
void	algo_500(t_a *a, t_b *b, t_algo *l);
void	algo_100(t_a *a, t_b *b, t_algo *l);
void	lowernumbers(t_a *a, t_algo *l);
void	call_algo(t_a *a, t_b *b, t_algo *l);
void	free_all(t_a *a, t_b *b);
void	free_split(t_algo *l);
void	free_error_msg(t_a *a, t_b *b);
void	printf_listl(t_algo	*stack, char *title);
void	printf_lista(t_a *stack, char *title);
void	printf_listb(t_b *stack, char *title);

#endif
