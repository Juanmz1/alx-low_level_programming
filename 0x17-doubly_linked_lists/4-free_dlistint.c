#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_dlistint - function that frees a dlistint_t list.
 * @head: pointer to the start of a linked list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *next;
	
	if (head == NULL)
	{
		printf("Freed !\n");
		exit(0);
	}
	while(head != NULL)
	{
		next = head->next;
		free(head);
		head = next;
	}
}
