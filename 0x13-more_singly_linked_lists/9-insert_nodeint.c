#include "lists.h"

/**
 * insert_nodeint_at_index -  function that inserts a new
 * node at a given position
 * @head: head of the list
 * @idx: unsigned int
 * @n: int
 * Return: NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *temp;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
		return (0);
	if (idx != 0)
	{
		for (i = 0; i < idx - 1 && temp != NULL; i++)
		{
			temp = temp->next;
		}
		if (temp == NULL)
			return (NULL);
	}
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	new->next = temp->next;
	temp->next = new;
	return (new);
}
