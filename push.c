#include "push_swap.h"

void push(s_stack **src, s_stack **dest)
{
	s_stack	*temp;
		if (*src == NULL)
		return ;
	temp = (*src)->next; //src stack is updated. First node is deleted.
	(*src)->next = *dest; //
	*dest = *src;
	*src = temp;

}

void	pa(s_stack **stack_a, s_stack **stack_b)
{
	push(stack_b, stack_a);
	printf("pa\n");
}

