#include "lists.h"

/**
 * list_len - returns the no. of elements of a list
 * @h: pointer to the head of the list
 * Return: no. of elements of the list
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;
	const list_t *temp;

	temp = h;

	if (temp != NULL)
	{
		while (temp->next != NULL)
		{
			count++;
			temp = temp->next;
		}
		count++;
	}
	return (count);
}
