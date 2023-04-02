#include "lists.h"
#include <stdlib.h>

/**
 * free_list - frees a list
 * @head: frees a list
 */

void free_list(list_t *head)
{
	free(head);
}
