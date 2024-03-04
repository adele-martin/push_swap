#ifndef PUSH_SWAP
# define PUSH_SWAP


#include <stdlib.h>
#include <stdio.h>


typedef struct s_stack
{
	int nb;
	struct s_stack *next;
} s_stack;


void	pa(s_stack **stack_a, s_stack **stack_b);
void push(s_stack **src, s_stack **dest);
#endif
