#include "lists.h"

/**
 * sum_listint - returns the sum of all the data in a listint list
 * @head: a pointer to the first node in the list
 *
 * Return: the sum of all the data in the list
 */

int sum_listint(listint_t *head)
{
	listint_t *nodePtr;
	int dataSum = 0;

	if (head == NULL)
	{
		return (0);
	}

	nodePtr = head;

	while (nodePtr)
	{
		dataSum += nodePtr->n;
		nodePtr = nodePtr->next;
	}
	return (dataSum);
}
