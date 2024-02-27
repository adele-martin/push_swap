/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linked_list.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademarti <ademarti@student.42berlin.de     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 14:27:54 by ademarti          #+#    #+#             */
/*   Updated: 2024/02/27 18:00:09 by ademarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

typedef struct s_stack
{
	int nb;
	struct s_stack *next;
} s_stack;

int main ()
{
	s_stack root;
	root.nb = 15;
	root.next = malloc(sizeof(s_stack));
	root.next->nb = -1;
	root.next->next = NULL;

	s_stack *curr;
	curr = &root;

	while (curr != NULL)
	{
		printf("%d", curr->nb);
		curr = curr->next;

	}
	free(root.next);

}