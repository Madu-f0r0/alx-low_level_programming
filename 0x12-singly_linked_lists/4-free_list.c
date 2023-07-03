#include "lists.h"
#include <stdlib.h>

/**
 * free_list - frees all the memory alocated for a list_t list
 * @head: a pointer to the first node of the list
 */

void free_list(list_t *head)
{
	list_t *nodePtr;

	if (head == NULL)
	{
		return;
	}

	nodePtr = head;
	while (head)
	{
		nodePtr = head->next;
		free(head->str);
		free(head);
		head = nodePtr;
	}
}
