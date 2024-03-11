/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademarti <ademarti@student.42berlin.de     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 13:31:16 by ademarti          #+#    #+#             */
/*   Updated: 2024/03/11 17:34:00 by ademarti         ###   ########.fr       */
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

//Error handling
int	check_duplicates(s_stack *s_a, int n);
int error_syntax(char *nbr);
void free_stack(s_stack **stack);
void	error_free(s_stack **s_a);
void handle_arguments(char **av);

//All operations
void push(s_stack **src, s_stack **dest);
void	pa(s_stack **stack_a, s_stack **stack_b);
void	pb(s_stack **stack_a, s_stack **stack_b);

#endif
