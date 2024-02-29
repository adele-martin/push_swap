/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linked_list.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademarti <adelemartin@student.42.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 14:27:54 by ademarti          #+#    #+#             */
/*   Updated: 2024/02/29 11:01:36 by ademarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct s_stack
{
	int nb;
	struct s_stack *next;
} s_stack;

void append_stack(s_stack *s_a, int n)
{
	s_stack *new_node;
	new_node = malloc(sizeof(s_stack));
	if (!new_node)
		exit(EXIT_FAILURE);
	new_node->nb = n;
	new_node->next = s_a->next;
	s_a->next = new_node;
}

int main (int ac, char **av)
{
	int j;
	s_stack s_a;
	s_a.next = NULL;
	s_stack *curr;
	curr = &s_a;

	j = 1;

//Change this to ft_atoi asaaaap
	while (av[j])
	{
		append_stack(&s_a, atoi(av[j]));
		j++;
	}
	while (curr->next != NULL)
		{
        curr = curr->next;
		printf("%d ", curr->nb);
    	}

	s_stack s_b;
	s_a.next->next = NULL;
	s_b.nb = -1;
    s_b.next = NULL;
	free(s_a.next);
}
