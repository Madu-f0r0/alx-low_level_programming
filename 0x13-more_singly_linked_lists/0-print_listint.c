#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: a pointer to the head of the listint_t list
 *
 * Return: the number of elements in the list
 */

size_t print_listint(const listint_t *h)
{
	size_t listCount = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		listCount++;
	}
	return (listCount);
}
