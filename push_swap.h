#ifndef PUSH_SWAP
# define PUSH_SWAP


#include <stdlib.h>
#include <stdio.h>


typedef struct s_stack
{
	int nb;
	struct s_stack *next;
} s_stack;

void pb(s_stack *s_a, s_stack *s_b);

#endif
