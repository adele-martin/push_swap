/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademarti <ademarti@student.42berlin.de     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 17:36:55 by ademarti          #+#    #+#             */
/*   Updated: 2024/03/12 16:30:34 by ademarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int stack_len(s_stack *stack)
{
	int	counter;

	counter = 0;
	if (stack == NULL)
		return (0);
	while (stack!= NULL)
	{
		stack = stack->next;
		counter++;
	}
	return (counter);
}

void swap(s_stack **stack)
{
	int len;

	len = stack_len(*stack);
    if (stack == NULL || *stack == NULL || 1 = len)
		return;

    s_stack *node_two = *stack;
    s_stack *node_one = (*stack)->next;

    node_two->next = node_one->next;
    node_one->prev = node_two->prev;
    node_two->prev = node_one; 
    node_one->next = node_two;

    *stack = node_one; // Update stack pointer if necessary
}

void sa(s_stack **s_a)
{
	swap(s_a);
	ft_putstr_fd("sa\n", 1);
}