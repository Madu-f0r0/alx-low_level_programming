#include "lists.h"
#include <stdlib.h>

/**
 * free_list - frees a list
 * @head: frees a list
 */

void free_list(list_t *head)
{
	list_t *temp;

	temp = head;
	while (temp != NULL)
	{
		temp = temp->next;
		free(head);
		head = temp;
	}
}
