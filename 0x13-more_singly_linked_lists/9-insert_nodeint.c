#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - inserts a node at an index of a listint_t list
 * @head: a double pointer to the first node of the list
 * @idx: the given index where the node is to be inserted
 * @n: the data to be assigned to the data segment of the node
 *
 * Return: the address of the new node created
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newNode, *nodePtr;
	unsigned int nodeCount;

	if (head == NULL)
		return (NULL);

	nodePtr = *head;
	for (nodeCount = 0; nodeCount <= idx; nodeCount++)
	{
		if (idx == 0 || (nodeCount + 1) == idx)
		{
			break;
		}
		else
		{
			if (nodePtr->next  == NULL)
			{
				return (NULL);
			}
			nodePtr = nodePtr->next;
		}
	}
	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	if (idx == 0)
	{
		newNode->next = *head;
		*head = newNode;
	}
	else
	{
		newNode->next = nodePtr->next;
		nodePtr->next = newNode;
	}
	return (newNode);
}
