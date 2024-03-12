/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademarti <ademarti@student.42berlin.de     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 17:19:07 by ademarti          #+#    #+#             */
/*   Updated: 2024/03/12 18:14:30 by ademarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate(s_stack **stack)
{
	s_stack	*to_rotate;
	s_stack	*new_head;
	s_stack *last_node;
	s_stack *temp;

	temp = *stack

	to_rotate = *stack;
	new_head = (*stack)->next;

	last_node = traverse_stack(new_head);
	last_node->next = to_rotate;
	to_rotate->next = new_head;
	*stack = new_head;
}