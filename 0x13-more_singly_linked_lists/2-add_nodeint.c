#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - adds a new node to the beginning of a listint_t list
 * @head: a pointer to the first node in the list
 * @n: holds the value to be assigned to the data element (n) of the node
 *
 * Return: the address of the new node created
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
	{
		return (NULL);
	}

	newNode->n = n;
	newNode->next = *head;
	*head = newNode;

	return (newNode);
}
