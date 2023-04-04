#include <stdio.h>
#include "lists.h"

/**
 * listint_len - counts the number of elements in a linked listint_t list
 * @h: a pointer to a listint_t
 * Returns: the number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t node_count = 0;

	while (h != NULL)
	{
		node_count++;
		h = h->next;
	}
	return (node_count);
}
