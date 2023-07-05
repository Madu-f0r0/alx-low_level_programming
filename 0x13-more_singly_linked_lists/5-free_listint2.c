#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - frees all the elements of a listint_t list
 * and sets the value of the pointer to the first node (head)
 * to NULL
 * @head: a double pointer to the first node
 */

void free_listint2(listint_t **head)
{
	listint_t *freeNode;

	if (*head)
	{
		freeNode = *head;
		while (*head)
		{
			freeNode = freeNode->next;
			free(*head);
			*head = freeNode;
		}
	}
}
