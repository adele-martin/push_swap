/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linked_list.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademarti <adelemartin@student.42.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 14:27:54 by ademarti          #+#    #+#             */
/*   Updated: 2024/03/01 17:00:24 by ademarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

typedef struct s_stack
{
	int nb;
	struct s_stack *next;
} s_stack;


int	ft_atoi(const char *nptr)
{
	size_t	result;
	size_t	sign;
	size_t	i;

	i = 0;
	result = 0;
	sign = 1;
	while ((nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == 32)
	{
		i++;
	}
	if (nptr[i] == '+' || nptr[i] == '-')
	{
		if (nptr[i] == '-')
		{
			sign = -1;
		}
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9' )
	{
		result = result * 10 + (nptr[i] - '0');
		i++;
	}
	return (sign * result);
}

int is_duplicate(s_stack *s_a, int nb)
{
	s_stack *temp;
	temp = malloc(sizeof(s_stack));
	while (temp != NULL)
	{
		if (nb == temp->nb)
			return 1;
		temp = temp->next;
	}
	return (0);
}

void append_stack(s_stack *s_a, int n)
{
	s_stack *new_node;
	new_node = malloc(sizeof(s_stack));
	if (!new_node)
		exit(EXIT_FAILURE);
	while (s_a->next != NULL)
	{
		s_a = s_a->next;
	}
	new_node->nb = n;
	new_node->next = s_a->next;
	s_a->next = new_node;
}

int main (int ac, char **av)
{

	s_stack	s_a;
	s_stack	s_b;
	int		j;
	int i;
	s_stack	*curr;

	s_a.next = NULL;
	j = 1;
	i = 0;
//Change this to ft_printf
	while (av[j])
	{
		i = 0;
		while (av[j][i])
		{
		if ((av[j][i] == '-' && av[j][i+1] == '-' || av[j][i] == '+' && av[j][i+1] == '+' ) || (!(av[j][i] >= '0' && av[j][i] <= '9' || av[j][i] == '+' || av[j][i] == '-' || av[j][i] == ' ')))
		{
			printf("Error\n");
			exit(EXIT_FAILURE);
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
		if (is_duplicate(&s_a, curr->nb) == 1)
			printf("Error\n");
        else
		curr = curr->next;
			printf("%d ", curr->nb);
    	}

	free(s_a.next);
	s_b.nb = -1;
    s_b.next = NULL;
	free(s_b.next);
}
