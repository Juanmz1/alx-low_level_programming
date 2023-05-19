#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * sum_dlistint - function that returns the sum of all the data (n) of a dlistint_t linked list.
 * @head: pointer to the start of the list
 * Return: sum of all data, or 0 if the list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0, i;

	if (head == NULL)
		return (0);
	for (i = 0; head != NULL; i++)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
