#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all the elements of a listint_t list.
 *
 * @h: head of linklist node
 *
 * Return: the number of nodes
 *
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;
	listint_t *current = *h

	while (h != NULL)
	{
		printf("%d\n", h->n);
		current = h->next;
		count++;
	}
	return (count);
}
