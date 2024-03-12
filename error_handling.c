/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_handling.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademarti <ademarti@student.42berlin.de     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 17:17:37 by ademarti          #+#    #+#             */
/*   Updated: 2024/03/12 16:45:00 by ademarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void handle_arguments(char **av)
{
	int	i;
	int	nbr_args;

	i = 0;
	nbr_args = 0;
	while (av[i])
	{
		nbr_args++;
		i++;
	}
	if (nbr_args < 2)
		exit(1);
}

int	check_duplicates(s_stack *s_a, int n)
{
	s_a = s_a->next;
	while (s_a)
	{
		if (s_a->value == n)
		{
			return (1);
		}
		s_a = s_a->next;
	}
	return 0;
}

int	error_syntax(char *nbr)
{
	int i;
	i = 0;
	while (nbr[i])
	{
		if (((nbr[i] == '-' && nbr[i + 1] == '-')) || ((nbr[i] == '+' && nbr[i + 1] == '+')) ||
		(!((nbr[i] >= '0' && nbr[i] <= '9') || nbr[i] == '+' || nbr[i] == '-' || nbr[i] == ' ')))
		{
			return 1;
		}
			i++;
	}
		return 0;
	}

void free_stack(s_stack **stack)
{
	s_stack *temp;
	s_stack *current;

	if (NULL == stack)
		return;
	current = *stack;
	while (current)
	{
		temp = current ->next;
		free(current);
		current = temp;
	}
	*stack = NULL;
}

void	error_free(s_stack **s_a)
{
	free_stack(s_a);
	write(2, "Error\n", 6);
	exit(1);
}
