#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dlistint - function that prints all the elements of a dlistint_t list.
 * @h: pointer to the start of the linked list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;
	
	if (h == NULL)
	{
		return (0);
	}
	for (i = 0; h != NULL; i++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (i)
}
