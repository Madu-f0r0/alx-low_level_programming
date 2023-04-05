#include "lists.h"

/**
 * sum_listint - sums up the data in all the nodes of a listint_t list
 * @head: points to the first node
 * Return: the sum; or 0 if list is empty
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp;

	if (head == NULL)
	{
		return (0);
	}
	temp = head;
	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
