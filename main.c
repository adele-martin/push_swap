// /* ************************************************************************** */
// /*                                                                            */
// /*                                                        :::      ::::::::   */
// /*   main.c                                             :+:      :+:    :+:   */
// /*                                                    +:+ +:+         +:+     */
// /*   By: ademarti <ademarti@student.42berlin.de     +#+  +:+       +#+        */
// /*                                                +#+#+#+#+#+   +#+           */
// /*   Created: 2024/02/27 14:27:54 by ademarti          #+#    #+#             */
// /*   Updated: 2024/03/11 13:54:41 by ademarti         ###   ########.fr       */
// /*                                                                            */
// /* ************************************************************************** */

#include "push_swap.h"

s_stack *traverse_stack(s_stack *head)
{
	while (head->next)
	{
		head = head->next;
	}
	return (head);
}

void	insertFront(s_stack **stack, int n)
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
	}
	else
	{
		last_node = traverse_stack(*stack);
		last_node->next = new_node;
	}
}

void initialize_stack(char **av, s_stack **s_a)
{
	int	i;
	int	nbr;

	i = 0;
	while (av[i])
	{
		if (error_syntax(av[i]) == 1)
			error_free(s_a);
		nbr = ft_atoi(av[i]);
		if ((nbr > INT_MAX) || (nbr < INT_MIN))
			error_free(s_a);
		insertFront(s_a, ft_atoi(av[i]));
        if (check_duplicates(*s_a, ft_atoi(av[i]) == 1))
			error_free(s_a);
        i++;
	}
	return;
}

int	main(int ac, char **av)
{
	s_stack *s_a;
	s_stack *s_b;
	s_stack *curr;

	s_a = NULL;
	s_b = NULL;
	if (ac == 1 || (ac == 2 && !av[1][0]))
		return 1;
	else if (ac == 2)
		av = ft_split(av[1], ' ');
	handle_arguments(av);
	initialize_stack(av + 1, &s_a);
	rrb(&s_b);
	curr = s_b;
	while (curr != NULL)
	{
		printf("%d", curr->value);
		curr = curr->next;
	}

	free_stack(&s_a);
	free_stack(&s_b);
	return 0;
}
