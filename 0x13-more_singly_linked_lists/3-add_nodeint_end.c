#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - adds a node to the end of a list
 * @head: points to a pointer to the first node
 * @n: contains value to be passed to listint_t member n
 * Return: address of new_last_node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_last_node, *temp;

	new_last_node = malloc(sizeof(listint_t));
	if (new_last_node == NULL)
	{
		return (NULL);
	}
	new_last_node->n = n;
	new_last_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_last_node;
	}
	else
	{
		temp = *head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = new_last_node;
	}
	return (new_last_node);
}
