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

	if (head == NULL || *head == NULL)
	{
		return (0);
	}
	i = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;
	return (i);
}
