#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - frees a listint_t list and changes value of head to NULL
 * @head: pointer to a pointer to the first node
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (*head == NULL || head == NULL)
		return;
	while (*head != NULL)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
	*head = NULL;
}
