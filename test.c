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


int error_syntax(char *nbr)
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

void error_handling(char **av, s_stack **s_a)
{
	int i;
	i = 0;
	int nbr;

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

// int count_arguments(char **av)
// {
// 	int count = 0;
//     while (av[count] != NULL) {
//         count++;
//     }
//     return count;
// }

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
	// 	ac = count_arguments(av);
	// if (ac == )
	error_handling(av + 1, &s_a);
	pb(&s_a, &s_b);

	curr = s_a;
	while (curr != NULL)
	{
		printf("%d", curr->value);
		curr = curr->next;
	}

	free_stack(&s_a);
	free_stack(&s_b);
	return 0;
}
