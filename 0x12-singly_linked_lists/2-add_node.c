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
	size_t s_len = 0;

	in_front = malloc(sizeof(list_t));
	in_front->next = *head;

	*head = in_front;
	in_front->str = strdup(str);
	while (str[s_len] != '\0')
		s_len++;
	in_front->len = s_len;
	if (*head == NULL)
                return (NULL);
	else
		return (*head);
}
