/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademarti <ademarti@student.42berlin.de     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 13:31:03 by ademarti          #+#    #+#             */
/*   Updated: 2024/03/04 14:07:48 by ademarti         ###   ########.fr       */
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

}

void	pa(s_stack **stack_a, s_stack **stack_b)
{
	push(stack_b, stack_a);
	printf("pa\n");
}

