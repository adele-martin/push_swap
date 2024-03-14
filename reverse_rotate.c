/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademarti <ademarti@student.42berlin.de     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 14:21:33 by ademarti          #+#    #+#             */
/*   Updated: 2024/03/14 17:24:20 by ademarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	reverse_rotate(s_stack **stack)
{
	int		len;
	s_stack	*prev;
	s_stack	*current;

	len = stack_len(*stack);
	if (NULL == stack || NULL == *stack || 1 == len)
		return ;
	prev = NULL;
	current = *stack;
	while (current->next != NULL) //this loop puts all elements in prev, exxcept the last node which is in current.
	{
		prev = current;
		current = current->next;
	}
	prev->next = NULL; //This is the detaching the second last node from list.
	current->next = *stack; // put last node as head.
	*stack = current; //You always put it back into stack.
}
void	rra(s_stack **s_a)
{
	reverse_rotate(s_a);
	ft_putstr_fd("rra\n", 1);
}

void	rrb(s_stack **s_b)
{
	reverse_rotate(s_b);
	ft_putstr_fd("rrb\n", 1);
}

void	rrr(s_stack **s_a, s_stack **s_b)
{
	reverse_rotate(s_a);
	reverse_rotate(s_b);
	ft_putstr_fd("rr\n", 1);
}