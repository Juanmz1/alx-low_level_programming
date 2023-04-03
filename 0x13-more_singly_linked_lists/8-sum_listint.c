#include "lists.h"

/**
 * sum_listint - function that returns the sum of
 * all the data (n) of a listint_t linked list.
 * @head: head of the list
 * Return: 0
*/
int sum_listint(listint_t *head)
{
	int i, sum = 0;

	if (head == NULL)
	{
		return (0);
	}
	if (head != NULL)
	{
		i = head->n;
		head = head->next;
		sum += i;
	}
	return (sum);
}
