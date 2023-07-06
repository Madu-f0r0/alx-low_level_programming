#include "lists.h"

/**
 * reverse_listint - reverses a listint_t list
 * @head: a double pointer to the first node of the list
 *
 * Return: the address of the new first node
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *firstNodePtr, *newFirstPtr;

	if (head == NULL || *head == NULL)
	{
		return (NULL);
	}

	firstNodePtr = *head;

	while (firstNodePtr->next)
	{
		newFirstPtr = *head;
		*head = firstNodePtr->next;
		firstNodePtr->next = (*head)->next;
		(*head)->next = newFirstPtr;
	}
	return (*head);
}
