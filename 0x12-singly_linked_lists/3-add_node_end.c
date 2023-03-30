#include "lists.h"
#include <stdio.h>
#include <string.h>

/**
 * _strlen - finds the length of a string
 * @str: string to find the length of
 *
 * Return: length of string
 */
unsigned int _strlen(char *str)
{
	unsigned int i;

	for (i = 0; str[i]; i++)
		;
	return (i);
}

/**
 * *add_node_end - function that adds a new node
 * at the end of a list_t list.
 * @head: a pointer to the list
 * @str: pointer to a string
 * Return: return new element
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *temp;

	if (str == NULL)
		return (NULL);
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	new->len = _strlen(new->str);
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	temp = *head;
	while (temp->next)
		temp = temp->next;
	temp->next = new;
	return (new);
}
