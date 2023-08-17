#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * @head: a double pointer to the head of the list
 * @n: the element to be contained in the new node
 *
 * Return: the address of the new node created
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node_ptr, *new_node = NULL;

	if (head)
	{
		new_node = malloc(sizeof(dlistint_t));
		if (new_node == NULL)
		{
			return (NULL);
		}

		new_node->n = n;
		new_node->next = NULL;

		if (*head == NULL)
		{
			new_node->prev = NULL;
			*head = new_node;
		}

		else
		{
			node_ptr = *head;
			while (node_ptr->next)
			{
				node_ptr = node_ptr->next;
			}
			node_ptr->next = new_node;
			new_node->prev = node_ptr;
		}
	}
	return (new_node);
}
