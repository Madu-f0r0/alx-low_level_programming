#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t list
 * @head: points to the first node
 * @index: the index of the list
 * Return: the node at the given index; NULL if node does not exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int n = 0;
	listint_t *temp, *nth_node;

	if (head == NULL)
		return (NULL);
	temp = head;
	while (temp != NULL && n != index + 1)
	{
		n++;
		nth_node = temp;
		temp = temp->next;
	}
	if (temp == NULL && n != index + 1)
		return (NULL);
	else
		return (nth_node);
}
