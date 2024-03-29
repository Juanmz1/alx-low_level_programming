#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strlen - function that returns the length of a string.
 * @s : s is a character
 * Return: value is i
 */
int _strlen(const char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * *add_node -  function that adds a new node
 * at the beginning of a list_t list.
 * @head: a pointer to the list
 * @str: a string to the list
 * Return: new element
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *add;
	int length = 0;

	add = malloc(sizeof(list_t));

	if (add == NULL)
	{
		return (NULL);
	}

	while (str[length])
		length++;


	add->str = strdup(str);
	add->len = _strlen(str);
	add->next = *head;
	*head = add;
	return (add);
}
