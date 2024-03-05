/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademarti <ademarti@student.42berlin.de     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 14:27:54 by ademarti          #+#    #+#             */
/*   Updated: 2024/03/05 13:43:22 by ademarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
	s_a = &new_node;
}

void check_duplicates(s_stack **s_a, int n)
{
	s_stack *temp;
	temp = *s_a;
	while (temp != NULL)
	{
		if (temp->nb == n)
			ft_putstr_fd("Error\n", 1);
		temp = temp->next;
	}
}

int	main (int ac, char **av)
{
	s_stack	*s_a;
	s_stack	*s_b;
	int		j;
	int		i;

	s_a = NULL;
	s_b = NULL;
	j = 1;
	i = 0;
	while (av[j])
	{
		if (ac <= 2)
		{
			return 0;
		}
		i = 0;
		while (av[j][i])
		{
		if (((av[j][i] == '-' && av[j][i+1] == '-')) || ((av[j][i] == '+' && av[j][i+1] == '+' )) ||
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
		// check_duplicates(&s_a, ft_atoi(av[j]));
		j++;
	}
	printf("hey");
	push(&s_a, &s_b);

	free(s_a);
	free(s_b);
	return 0;
}
