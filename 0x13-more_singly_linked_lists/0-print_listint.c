#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: pointer to a listint_t
 * Return: number of nodes printed
 */

size_t print_listint(const listint_t *h)
{
	listint_t *temp;
	size_t node_count = 0;

	if (head == NULL)
	{
		return (NULL);
	}
	temp = h
	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		node_count++;
	}
	return (node_count);
}
