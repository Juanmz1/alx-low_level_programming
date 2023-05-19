#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/** 
 * add_dnodeint - function that adds a new
 * node at the beginning of a dlistint_t list
 * @head: pointer to a pointer to the start of a linked list
 * @n: element in the list
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *begin;

	if (head == NULL)
		return (NULL);
	begin = malloc(sizeof(dlistint_t));
	if (begin == NULL)
		return (NULL);
	begin->n = n;
	begin->prev = NULL;
	begin->next = *head;
	*head = begin;
	if (begin->next != NULL)
	{
		(begin->next)->prev = begin;
	}
	return (begin);
}
