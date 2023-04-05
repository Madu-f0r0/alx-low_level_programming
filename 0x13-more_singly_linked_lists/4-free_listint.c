#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - frees a listint_t list
 * @head: a pointer to the first node of the list
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	if (head == NULL)
		return;
	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
