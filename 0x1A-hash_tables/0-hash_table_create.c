#include "hash_tables.h"

/**
 * hash_table_create - function that creates a hash table.
 * @size: size of the array
 * Return: pointer to a newly created table
 */
hash_table_t *hash_table_create(unsigned long int size);
{
	unsigned long int size;
	hash_table_t *table;

	table->size = size;
	table->array = malloc(size * sizeof(hash_node_t *));
	if (table->array == NULL)
	{
		free(table);
		return (NULL);
	}
	for (int i = 0; i < size[i]; i++)
	{
		table->array[i] == NULL;
		return (table);
	}
}
