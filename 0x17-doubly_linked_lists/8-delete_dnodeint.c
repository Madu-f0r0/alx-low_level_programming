#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes a node at an index of a linked list
 * @head: a double pointer to the head node of the list
 * @index: the index of the node to be deleted
 *
 * Return: 1 if successful; -1 if not successful
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *node_ptr;

	if (head)
	{
		node_ptr = *head;
		while (node_ptr)
		{
			if (index == 0)
			{
				if (node_ptr->prev)
				{
					node_ptr->prev->next = node_ptr->next;
				}
				else
				{
					*head = node_ptr->next;
				}
				if (node_ptr->next)
				{
					node_ptr->next->prev = node_ptr->prev;
				}
				free(node_ptr);
				return (1);
			}
			node_ptr = node_ptr->next;
			index--;
		}
	}
	return (-1);
}
