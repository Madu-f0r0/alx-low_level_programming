#include "lists.h"
#include <stdlib.h>

/**
 * free_list - frees a list
 * @head: frees a list
 */

void free_list(list_t *head)
{
	list_t *current_node, *temp;

	current_node = head;
	while (temp != NULL)
	{
		free(temp);
		temp = temp->next;
	}
}
