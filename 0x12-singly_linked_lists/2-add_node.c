#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - inserts a node at the beginning of a list_t list
 * @head: a double pointer to the first node of the list
 * @str: the string to be added to the str element of the node
 *
 * Return: an address to the new node created
 * NULL is returned if memory allocation fails
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;

	/* Allocate memory for the new node */
	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
	{
		return (NULL);
	}

	/* Guidelines to populate new node */
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

	/* Pass address of first node to link segment of new node */
	newNode->next = *head;

	/* Point head to new node created */
	*head = newNode;

	/* Return address of new node created */
	return (*head);
}
