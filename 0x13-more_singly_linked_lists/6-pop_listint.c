#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the first node of a listint_t list
 * @head: a double pointer to the first node of the list
 *
 * Return: the data in the deleted node
 */

int pop_listint(listint_t **head)
{
	listint_t *popNode;
	int popNodeData = 0;

	if (head && *head)
	{
		popNode = *head;
		*head = popNode->next;
		popNodeData = popNode->n;
		free(popNode);
		popNode = NULL;
	}

	return (popNodeData);
}
