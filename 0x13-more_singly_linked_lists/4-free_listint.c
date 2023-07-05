#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - frees every element of a listint_t list
 * @head: points to the first element of the linked list
 *
 * Return: nothing
 */

void free_listint(listint_t *head)
{
	listint_t *freeNode;

	if (head == NULL)
	{
		return;
	}

	freeNode = head;
	while (head)
	{
		freeNode = freeNode->next;
		free(head);
		head = freeNode;
	}
}
