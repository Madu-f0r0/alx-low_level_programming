#include "lists.h"

/**
 * add_node - inserts a node at the beginning of a list
 * @head: a pointer to a pointer to the first node
 * @str: the string member of list_t
 * Return: the address of the new element or NULL
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *in_front;

	in_front = malloc(sizeof(list_t));
	if (in_front == NULL)
	{
		return (NULL);
	}
	if (*head == NULL)
	{
		in_front->next = NULL;
	}
	else
	{
		in_front->next = *head;
	}
	*head = in_front;
	in_front->str = strdup(str);
	in_front->len = strlen(str);
	return (*head);
}
