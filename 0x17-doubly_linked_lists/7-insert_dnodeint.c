#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a node at a given position
 * @h: a double piointer to the first node in the list
 * @idx: the index to insert the node
 * @n: the data element of the new node
 *
 * Return: the address of the new_node created
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *node_ptr, *prev_node, *new_node = NULL;
	unsigned int i;

	if (h)
	{
		node_ptr = *h;
		for (i = 0; i <= idx; i++)
		{
			if (idx == 0)
			{
				new_node = add_dnodeint(*h, n);
				break;
			}
			else
			{
				if (i + 1 == idx && node_ptr->next == NULL)
				{
					new_node = add_dnodeint_end(&node_ptr, n);
					break;
				}
				else if (i == idx)
				{
					prev_node = node_ptr->prev;
					new_node = add_dnodeint(&node_ptr, n);
					new_node->prev = prev_node;
					prev_node->next = new_node;
					break;
				}
			}
			node_ptr = node_ptr->next;
		}
	}
	return (new_node);
}
