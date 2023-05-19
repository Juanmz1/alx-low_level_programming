#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: double pointer to the beginning of the linked list
 * @idx: index at which to insert the new node
 * @n: data to enter into new node
 *
 * Return: pointer to the new node, or NULL on failure
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *temp1, *temp2;
	unsigned int i;

	if (h == NULL)
		return (NULL);
	new = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx != 0)
	{
		temp1 = *h;
		for (i = 0; i < idx - 1 && temp1 != NULL; i++)
		{
			temp1 = temp1->next;
		}
		if (temp1 == NULL)
			return (NULL);
	}
	if (idx == 0)
	{
		temp2 = *h;
		*h = new;
		new->next = NULL;
	}
	else
	{
		new->prev = temp1;
		temp2 = temp1->next;
		temp1->next = new;
	}
	new->next = temp2;
	if (new->next != NULL)
		new->next->prev = new;
	return (new);
}
