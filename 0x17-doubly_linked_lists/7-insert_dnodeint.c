#include "lists.h"
#include <stdio.h>

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: a pointer to the head node in the list
 * @idx: the index where the node is to be added
 * @n: the data element of the list
 *
 * Return: the address of the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *node_ptr, *new_node = NULL;

	if (h)
	{
		new_node = malloc(sizeof(dlistint_t));
		if (new_node == NULL)
		{
			return (NULL);
		}

		new_node->n = n;

		node_ptr = *h;
		while (node_ptr || idx)
		{
			if (idx == 0)
			{
				if (*h == NULL)
				{
					*h = new_node;
					new_node->next = NULL;
					new_node->prev = NULL;
				}
				else
				{
					new_node->next = node_ptr;
					new_node->prev = node_ptr->prev;
					if (node_ptr == *h)
						*h = new_node;
					else
						node_ptr->prev->next = new_node;
					node_ptr->prev = new_node;
				}
				return (new_node);
			}

			if (node_ptr->next == NULL)
			{
				if (idx - 1)
				{
					return (NULL);
				}
				else
				{
					new_node->next = NULL;
					new_node->prev = node_ptr;
					node_ptr->next = new_node;
					return (new_node);
				}
			}
			node_ptr = node_ptr->next;
			idx--;
		}
	}
	return (new_node);
}
