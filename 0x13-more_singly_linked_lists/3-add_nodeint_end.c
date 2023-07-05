#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - inserts a node at the end of a listint_t list
 * @head: a double pointer to the first node in the list
 * @n: holds the value to be assigned to the data  element (n) of the node
 *
 * Return: the address of the newly created node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *nodePtr, *newNode;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
	{
		return (NULL);
	}

	newNode->n = n;
	newNode->next = NULL;

	if (head && *head)
	{
		nodePtr = *head;
		while (nodePtr->next)
		{
			nodePtr = nodePtr->next;
		}
		nodePtr->next = newNode;
	}
	else
	{
		*head = newNode;
	}
	return (newNode);
}
