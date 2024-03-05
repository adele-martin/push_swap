/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademarti <ademarti@student.42berlin.de     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 14:27:54 by ademarti          #+#    #+#             */
/*   Updated: 2024/03/05 12:25:05 by ademarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

typedef struct s_stack
{
	int nb;
	struct s_stack *next;
	struct s_stack *prev;
} s_stack;

void insertFront(s_stack **s_a, int n)
{
	s_stack *new_node;

	new_node = malloc(sizeof(s_stack));
	if (!new_node)
		return;
	new_node->nb = n;
	new_node->next = (*s_a);
	new_node->prev = NULL;

	if ((*s_a) != NULL)
		(*s_a)->prev = new_node;

	s_a = new_node;
}

int	main (int ac, char **av)
{
	s_stack *head;
	s_stack	s_a;
	s_stack	s_b;
	int		j;
	int		i;
	s_stack	*curr;

	s_a.next = NULL;
	j = 1;
	i = 0;
	while (av[j])
	{
		if (ac <= 2)
		{
			return;
		}
		i = 0;
		while (av[j][i])
		{
		if (((av[j][i] == '-' && av[j][i+1] == '-')) || ((av[j][i] == '+' && av[j][i+1] == '+' )) ||
		(!((av[j][i] >= '0' && av[j][i] <= '9') || av[j][i] == '+' || av[j][i] == '-' || av[j][i] == ' ')))
			{
			ft_putstr_fd("Error\n", 1);
			return;
			}
		i++;
		}
		j++;
	}
	j = 1;
	while (av[j])
	{
		append_stack(&s_a, ft_atoi(av[j]));
		j++;
	}
	// curr = &s_a;
	// while (curr->next != NULL)
	// 	{
	// 	curr = curr->next;
	// 		printf("%d ", curr->nb);
	// 	}
	s_b.nb = -1;
	s_b.next = NULL;
	pa(&s_a, &s_b);
	printf("hey");

	free(s_a.next);
	free(s_b.next);
}
