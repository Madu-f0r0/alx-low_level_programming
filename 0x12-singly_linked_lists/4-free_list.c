#include "lists.h"
#include <stdlib.h>

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
