#include "lists.h"

/**
 * pop_listint -  function that deletes the head
 * node of a listint_t linked list
 * @head: head of the list
 * Return: if the linked list is empty return 0
 */
int pop_listint(listint_t **head)
{
	listint_t *current;
	int n;

	if (head == NULL || *head == NULL)
		return (0);
	current = (*head)->next;
	n = current->n;
	free(current);
	return (n);
}
