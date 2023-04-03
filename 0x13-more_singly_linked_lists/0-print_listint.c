#include "lists.h"
#include <stdio.h>

/**
 *  print_listint - function that prints all the
 *  elements of a listint_t list.
 *  @h: head to the list
 *  Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
		printf("%d\n", h->n);
	}
	return (count);
}
