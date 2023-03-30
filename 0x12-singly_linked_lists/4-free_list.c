#include "lists.h"
#include <stdio.h>

/**
 * free_list - function that frees a list_t list.
 * @head: a list of element
 * Return: free
*/
void free_list(list_t *head)
{
	if (head)
	{
		free_list(head->next);
		if (head->str)
			free(head->str);
		free(head);
	}
	free(head);
}
