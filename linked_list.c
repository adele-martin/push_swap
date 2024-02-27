/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linked_list.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademarti <ademarti@student.42berlin.de     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 14:27:54 by ademarti          #+#    #+#             */
/*   Updated: 2024/02/27 17:47:44 by ademarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

typedef struct Node
{
	int nb;
	struct Node *next;
} Node;

int main ()
{
	Node root;
	root.nb = 15;
	root.next = malloc(sizeof(Node));
	root.next->nb = -1;
	root.next->next = NULL;

	Node *curr;
	curr = &root;

	while (curr != NULL)
	{
		printf("%d", curr->nb);
		curr = curr->next;

	}
	free(root.next);

}