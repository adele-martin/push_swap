/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademarti <ademarti@student.42berlin.de     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 13:31:16 by ademarti          #+#    #+#             */
/*   Updated: 2024/03/05 12:59:17 by ademarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP
# define PUSH_SWAP

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "libft/libft.h"

typedef struct s_stack
{
	int nb;
	struct s_stack *next;
	struct s_stack *prev;
} s_stack;

void push(s_stack **src, s_stack **dest);
void	pa(s_stack **stack_a, s_stack **stack_b);

#endif
