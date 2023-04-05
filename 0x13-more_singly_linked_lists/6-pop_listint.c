#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the first node of a listint_t list
 * @head: points to a pointer to the first node of the list
 * Return: the data in the deleted first node
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int i;

	if (head == NULL)
		return (0);
	temp = *head;
	i = (*head)->n;
	*head = (*head)->next;
	free(temp);
	temp = NULL;
	return (i);
}
