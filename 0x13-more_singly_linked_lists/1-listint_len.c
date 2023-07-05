#include "lists.h"

/**
 * listint_len - returns the number of nodes in a listint_t list
 * @h: a pointer to the first node in the listint_t list
 *
 * Return: the number of nodes in the listint_t list
 */

size_t listint_len(const listint_t *h)
{
	size_t nodeCount = 0;

	while (h)
	{
		h = h->next;
		nodeCount++;
	}
	return (nodeCount);
}
