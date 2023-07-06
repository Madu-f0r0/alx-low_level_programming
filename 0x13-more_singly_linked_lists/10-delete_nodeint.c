#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - deletes a listint_t list node at a given index
 * @head: a double pointer to the beginning of the node
 * @index: the index of the node to be deleted
 *
 * Return: 0 if successful; -1 if unsuccessful
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int nodeCount;
	listint_t *nodePtr, *temp;

	if (*head == NULL || head == NULL)
	{
		return (-1);
	}

	nodePtr = *head;
	for (nodeCount = 0; nodeCount <= index; nodeCount++)
	{
		if (index == 0 || (nodeCount + 1) == index)
		{
			break;
		}
		else
		{
			if (nodePtr->next  == NULL)
			{
				return (-1);
			}
			nodePtr = nodePtr->next;
		}
	}

	if (index == 0)
	{
		*head = nodePtr->next;
		free(nodePtr);
	}
	else
	{
		temp = (nodePtr->next)->next;
		free(nodePtr->next);
		nodePtr->next = temp;
	}
	return (1);
}
