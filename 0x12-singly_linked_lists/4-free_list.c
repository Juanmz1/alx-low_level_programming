#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_list - function that frees a list_t list.
 * @head: a list of element
 * Return: free
*/
void free_list(list_t *head)
{
	list_t *curr_node;

	while ((curr_node = head) != NULL)
	{
		head = head->next;
		free(curr_node->str);
		free(curr_node);
	}
}
