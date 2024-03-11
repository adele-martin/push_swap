/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademarti <ademarti@student.42berlin.de     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 13:31:16 by ademarti          #+#    #+#             */
/*   Updated: 2024/03/11 14:11:18 by ademarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP
# define PUSH_SWAP

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "libft/libft.h"

#define INT_MAX 2147483647
#define INT_MIN (-2147483647 - 1)

typedef struct t_stack
{
	int value;
	int curr_pos;
	struct t_stack *next;
	struct t_stack *prev;
} s_stack;

void push(s_stack **src, s_stack **dest);
void	pa(s_stack **stack_a, s_stack **stack_b);
void	pb(s_stack **stack_a, s_stack **stack_b);

#endif
