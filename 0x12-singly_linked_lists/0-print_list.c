#include "lists.h"
#include <stdio.h>
/**
 * print_list - function that prints all the elements of a list_t list.
 * @h: name of the list
 * Return: numbers of node
*/
size_t print_list(const list_t *h)
{
	int i = 0;

	while (h)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d],%s", h->len, h->str);
		}
		i++;
		h = h->next;
	}
	return (i);
}
