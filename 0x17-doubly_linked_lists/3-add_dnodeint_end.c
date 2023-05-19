#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_dnodeint_end - function that adds a new node at the end of a dlistint_t list.
 * @head: a pointer to a pointer to the start of the linked list
 * @n: element in the linked list
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *end, *mid = *head;

	if (head == NULL)
		return (NULL);
	end = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (end == NULL)
		return (NULL);
	end->n = n;
	end->next = NULL;
	if (*head == NULL)
	{
		end->prev = NULL;
		*head = end;
		return (end);
	}
	mid = *head;
	while (mid->next != NULL)
		mid = mid->next;
	mid->next = end;
	end->prev = mid;
	return (end);
}
