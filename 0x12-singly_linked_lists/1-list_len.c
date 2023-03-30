#include "lists.h"
#include <stdio.h>

/**
 * list_len - function that returns the number of
 * elements in a linked list_t list.
 * @h: list of element in the node
 * Return: number of node
*/
size_t list_len(const list_t *h)
{
	int num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}
	return (num);
}
