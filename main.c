/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademarti <ademarti@student.42berlin.de     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 14:27:54 by ademarti          #+#    #+#             */
/*   Updated: 2024/03/07 14:54:00 by ademarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

s_stack *traverse_stack(s_stack *head)
{
	while (head->next)
	{
		head = head->next;
	}
	return (head);
}

void insertFront(s_stack **stack, int n)
{
	s_stack *new_node;
	s_stack *last_node;

	if (!stack)
		return;
	new_node = malloc(sizeof(s_stack));
	if (!new_node)
		return;
	new_node->value = n;
	new_node->next = NULL;
	if (*stack == NULL)
	{
		(*stack) = new_node;
		new_node->prev = NULL;
	}
	else
	{
		last_node = traverse_stack(*stack);
		last_node->next = new_node;
		new_node->prev = last_node;
	}
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

int	main(int ac, char **av)
{
	s_stack *s_a;
	s_stack *s_b;
	int j;
	int i;
	s_stack *curr;

	s_a = NULL;
	s_b = NULL;
	j = 1;
	i = 0;
	if (ac == 1 || (ac == 2 && !av[1][0]))
		return 1;
	else if (ac == 2)
		av = ft_split(av[1], ' ');
	while (av[j])
	{
		i = 0;
		while (av[j][i])
		{
			if (((av[j][i] == '-' && av[j][i + 1] == '-')) || ((av[j][i] == '+' && av[j][i + 1] == '+')) ||
				(!((av[j][i] >= '0' && av[j][i] <= '9') || av[j][i] == '+' || av[j][i] == '-' || av[j][i] == ' ')))
			{
				ft_putstr_fd("Error\n", 1);
				return 0;
			}
			i++;
		}
		j++;
	}
	j = 1;
	while (av[j])
	{
		insertFront(&s_a, ft_atoi(av[j]));
		if (check_duplicates(s_a, ft_atoi(av[j]) == 1))
		{
			ft_putstr_fd("Error\n", 1);
			return 0;
		}
		j++;
	}
	pb(&s_a, &s_b);

	curr = s_a;
	while (curr != NULL)
	{
		printf("%d", curr->value);
		curr = curr->next;
	}

	free(s_a);
	free(s_b);
	return 0;
}
