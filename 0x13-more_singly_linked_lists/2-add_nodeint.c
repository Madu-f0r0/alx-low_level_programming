#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - adds a node to the beginning of a list
 * @head: pointer to a pointer to a listint_t (first node)
 * @n: contains value to be passed to member n
 * Return: address of new node if successful; NULL if fails
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_first_node;

	new_first_node = (listint_t *)malloc(sizeof(listint_t));
	if (new_first_node == NULL)
	{
		return (NULL);
	}
	new_first_node->n = n;
	new_first_node->next = *head;
	*head = new_first_node;
	return (*head);
}
