/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademarti <ademarti@student.42berlin.de     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 17:36:55 by ademarti          #+#    #+#             */
/*   Updated: 2024/03/12 17:16:44 by ademarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(s_stack **stack)
{
	int	len;

	len = stack_len(*stack);
	if (stack == NULL || *stack == NULL || 1 == len)
		return;
	s_stack *node_one = (*stack)->next;
	s_stack *node_two = *stack;
	node_two->next = node_one->next;
	node_one->next = node_two;
	*stack = node_one;
}

void	sa(s_stack **s_a)
{
	swap(s_a);
	ft_putstr_fd("sa\n", 1);
}

void	sb(s_stack **s_b)
{
	swap(s_b);
	ft_putstr_fd("sb\n", 1);
}

void	ss(s_stack **s_a, s_stack **s_b)
{
	swap(s_a);
	swap(s_b);
	ft_putstr_fd("ss\n", 1);
}