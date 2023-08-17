#include "lists.h"

/**
 * get_dnodeint_at_index - finds the nth node of a dlistint_t list
 * @head: a pointer to the head of the list
 * @index: the index of the node to be selected
 *
 * Return: the address of the node at the specified index
 * NULL is returned if the node at that index does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *nth_node = head;

	if (head)
	{
		while (nth_node)
		{
			if (index == 0)
			{
				return (nth_node);
			}
			nth_node = nth_node->next;
			index--;
		}
	}
	return (NULL);
}
