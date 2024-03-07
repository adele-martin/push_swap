/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademarti <ademarti@student.42berlin.de     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 13:31:03 by ademarti          #+#    #+#             */
/*   Updated: 2024/03/07 14:53:16 by ademarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void push(s_stack **src, s_stack **dest)
{
	s_stack	*temp;
	if (*src == NULL)
		return ;
	temp = (*src)->next; //src stack is updated. First node is deleted.
	(*src)->next = *dest; //
	*dest = *src;
	*src = temp;
	//Should I return a value?
}

void	pa(s_stack **stack_a, s_stack **stack_b)
{
	push(stack_b, stack_a);
	ft_putstr_fd("pa\n", 1);
}

void	pb(s_stack **stack_a, s_stack **stack_b)
{
	push(stack_a, stack_b);
	ft_putstr_fd("pa\n", 1);
}
