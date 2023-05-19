#include "lists.h"

/**
 * dlistint_len - function that returns the number
 * of elements in a linked dlistint_t list.
 * @h: pointer to the head of the list
 * Return: number of elements in a linked dlistint_t list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	for (i = 0; h != NULL; i++)
	{
		h = h->next;
	}
	return (i);
}
