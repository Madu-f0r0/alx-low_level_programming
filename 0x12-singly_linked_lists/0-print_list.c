#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all the elements of a list_t list
 * @h: a pointer to the firt node of the list
 *
 * Return: the number of elements in the list
 */

size_t print_list(const list_t *h)
{
	size_t listCount = 0;

	while (h)
	{
		if (!h->str)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}

		listCount++;
		h = h->next;
	}
	return (listCount);
}
