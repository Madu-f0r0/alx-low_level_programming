#include "lists.h"

/**
 * dlistint_len - counts the number of elements in a dlistint_t list
 * @h: a pointer to the head node
 *
 * Return: the number of elements in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t node_count = 0;

	if (h == NULL)
		return (EXIT_SUCCESS);

	while (h)
	{
		h = h->next;
		node_count++;
	}
	return (node_count);
}
