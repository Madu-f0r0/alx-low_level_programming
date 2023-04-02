#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - inserts a node at the end of the list
 * @head: pointer to a pointer to the first node
 * @str: string to be duplicated and added to the list
 * Return: pointer to new node or NULL if unsuccessful
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *last_node, *temp;
	size_t s_len;

	last_node = malloc(sizeof(list_t));
	if (last_node == NULL)
	{
		return (NULL);
	}
	last_node->str = strdup(str);
	for (s_len = 0; str[s_len] != '\0'; s_len++)
		;
	last_node->len = s_len;
	last_node->next = NULL;

	if (*head == NULL)
	{
		*head = last_node;
	}
	else
	{
		temp = *head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = last_node;
	}
	return (*head);
}
