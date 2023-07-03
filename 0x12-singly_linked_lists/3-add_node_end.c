#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - inserts a new node at the end of a list_t list
 * @head: a double pointer to the first node in the list
 * @str: a string to initialize the str element of the new node with
 *
 * Return: the address of the new node
 * NULL is returned if function fails
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode, *nodePtr;

	/* Assign address of first node to nodePtr */
	nodePtr = *head;

	/* Allocate memory for a new node */
	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
	{
		return (NULL);
	}

	/* Guidelines for initializing the new node */
	if (str == NULL)
	{
		newNode->len = 0;
		newNode->str = NULL;
	}
	else
	{
		newNode->len = strlen(str);
		newNode->str = strdup(str);
	}
	if (*head == NULL)
	{
		*head = newNode;
	}
	else
	{
		/* Traverse list to the end of the list */
		while (nodePtr->next)
		{
			nodePtr = nodePtr->next;
		}
		/* Add address of the new node to the link segment of the last node */
		nodePtr->next = newNode;
	}
	return (newNode);
}
