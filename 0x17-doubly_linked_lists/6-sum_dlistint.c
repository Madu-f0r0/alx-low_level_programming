#include "lists.h"

/**
 * sum_dlistint - calculates the sum of all the data in  a list
 * @head: a pointer to the first node of the list
 *
 * Return: the sum calculated. 0 is returned if the list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int list_sum = 0;
	dlistint_t *node_ptr = head;

	if (head)
	{
		while (node_ptr)
		{
			list_sum += node_ptr->n;
			node_ptr = node_ptr->next;
		}
	}
	return (list_sum);
}
