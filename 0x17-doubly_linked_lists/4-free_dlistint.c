#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list
 * @head: a pointer to the head of the list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *free_node;

	if (head)
	{
		while (head)
		{
			free_node = head;
			head = head->next;
			free(free_node);
		}
	}
}
