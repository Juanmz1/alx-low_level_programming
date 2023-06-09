#include "hash_tables.h"

/**
 * free_node - free a hash node
 * @file: pointer to hash node
 */
void free_node(hash_node_t *data)
{
	free(file->key);
	free(file->value);
	free(file);
}

/**
 * hash_table_set - insert a hash data into a table
 * @ht: hash table
 * @key: hash key to the hash table
 * @value: hash value to the hash table
 * )
 * Return: 1 on success else 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *file, *current;

	if (ht == NULL || ht->array == NULL)
		return (0);
	if (strlen(key) == 0)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	file = malloc(sizeof(hash_node_t));
	if (file == NULL)
		return (0);
	file->key = strdup(key);
	file->value = strdup(value);
	curreent = ht->array[index];
	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
		{
			free(current->value);
			current->value = strdup(value);
			free_node(file);
			return (1);
		}
		current = current->next;
	}
	file->next = ht->array[index];
	ht->array[index] = file;
	return (1);
}
