#include "push_swap.h"

void pa(s_stack *s_a, s_stack *s_b)
{
	int nb;
	char *new_a;
	char *new_b;
	if (!s_b)
		return;
	new_a = malloc(sizeof(s_stack));
	new_b = malloc(sizeof(s_stack));
	if (!new_a || !new_b)
		exit(EXIT_FAILURE);
	new_a = s_b-->nb;
}

void push(s_stack *src, s_stack *dest)
{
	s_stack *temp;
	temp = src;
	dest = temp;
}

void	pa(s_stack **stack_a, s_stack **stack_b)
{
	push(stack_b, stack_a);
	printf("pa\n");
}

void pb(s_stack *s_a, s_stack *s_b)
{
	int nb;
	char *new_a;
	char *new_b;
	if (!s_a)
		return;
	new_a = malloc(sizeof(s_stack));
	new_b = malloc(sizeof(s_stack));
	if (!new_a || !new_b)
		exit(EXIT_FAILURE);
	new_b = s_a;
	new_b-->nb = s_a-->nb;
}
