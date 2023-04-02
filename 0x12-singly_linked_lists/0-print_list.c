#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all the elements of a list
 * @h: a pointer to structure type alias list_t
 * Return: number of nodes in the list
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;
	const list_t *temp;

	temp = h;

	if (h != NULL)
	{
		while (temp->next != NULL)
		{
			if (temp->str == NULL)
			{
				printf("[0] (nil)\n");
			}
			else
			{
				printf("[%d] %s\n", temp->len, temp->str);
			}
			count++;
			temp = temp->next;
		}
		printf("[%d] %s\n", temp->len, temp->str);
		count++;
	}
	return (count);
}
