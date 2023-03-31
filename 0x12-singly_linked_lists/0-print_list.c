#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all the elements of a list
 * @h: a pointer to structure type alias list_t
 * Return: number of nodes in the list
 */

size_t print_list(const list_t *h)
{
	/* Declare temp pointer to traverse list, count checks no. of nodes */
	size_t count = 0;
	const list_t *temp;

	/* Malloc not needed. *h already initialized in main function */
	temp = h;

	if (h != NULL)
	{
		/* Traverse list and print members; return number of nodes using count */
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
