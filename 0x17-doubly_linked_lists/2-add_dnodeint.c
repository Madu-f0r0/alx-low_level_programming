#include "lists.h"

/**
 * add_dnodeint - adds a new node to the beginnin of a list
 * @head: a double pointer to the first node in the list
 * @n: the integer element in the new node
 *
 * Return: the address of the new node if created successfully
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = NULL;

	if (head)
	{
		new_node = malloc(sizeof(dlistint_t));
		if (new_node == NULL)
		{
			return (NULL);
		}

		new_node->n = n;
		new_node->prev = NULL;
		new_node->next = *head;

		if (*head)
		{
			(*head)->prev = new_node;
		}

		*head = new_node;
	}
	return (new_node);
}
