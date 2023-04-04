#include "lists.h"
#include <stdlib.h>

/**
 * free_list - frees a list
 * @head: frees a list
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (temp != NULL)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
