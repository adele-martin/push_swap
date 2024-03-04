/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linked_list.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademarti <ademarti@student.42berlin.de     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 14:27:54 by ademarti          #+#    #+#             */
/*   Updated: 2024/03/04 17:08:28 by ademarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	append_stack(s_stack *s_a, int n)
{
	s_stack	*new_node;
	s_stack	*temp;

	new_node = malloc(sizeof(s_stack));
	if (!new_node)
		return;
	temp = s_a->next;;
	while (temp != NULL)
	{
		if (temp->nb == n)
		{
			free(new_node);
			ft_putstr_fd("Error\n");
			return;
		}
		temp = temp->next;
	}
	while (s_a->next != NULL)
	{
		s_a = s_a->next;
	}
	new_node->nb = n;
	new_node->next = s_a->next;
	s_a->next = new_node;
}

int	main (int ac, char **av)
{

	s_stack	s_a;
	s_stack	s_b;
	int		j;
	int i;
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
			ft_putstr_fd("Error\n");
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
	curr = &s_a;
	while (curr->next != NULL)
		{
		curr = curr->next;
			printf("%d ", curr->nb);
		}

	// pa(&s_a, &s_b);
	s_b.nb = -1;
	s_b.next = NULL;
	free(s_a.next);
	free(s_b.next);
}
