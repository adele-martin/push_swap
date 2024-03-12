/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademarti <ademarti@student.42berlin.de     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 17:03:28 by ademarti          #+#    #+#             */
/*   Updated: 2024/03/12 17:03:57 by ademarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	stack_len(s_stack *stack)
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