#include "lists.h"

/**
 * list_len - calculates the number of elements in a list_t list
 * @h: pointer to the first node of the list
 *
 * Return: the number of elements(nodes) in the list
 */

size_t list_len(const list_t *h)
{
	size_t listCount = 0;

	while (h)
	{
		h = h->next;
		listCount++;
	}
	return (listCount);
}
