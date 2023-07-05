#include "lists.h"

/**
 * get_nodeint_at_index - returns the address of a node
 * of a listint_t list at a given index
 * @head: a pointer to the first node of the list
 * @index: the index of the node whose address is to be returned
 *
 * Return: the ddress of the selected node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *nodePtr;
	unsigned int nodeCount;

	if (head == NULL)
	{
		return (NULL);
	}

	nodePtr = head;
	for (nodeCount = 0; nodeCount <= index; nodeCount++)
	{
		if (nodePtr == NULL)
		{
			return (NULL);
		}
		if (nodeCount == index)
		{
			break;
		}
		nodePtr = nodePtr->next;
	}
	return (nodePtr);
}
