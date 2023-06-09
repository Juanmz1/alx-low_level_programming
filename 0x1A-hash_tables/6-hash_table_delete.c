#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *current, *old;

	if (ht != NULL)
	{
		if (ht->array == NULL)
		{
			free(ht);
			exit(EXIT_SUCCESS);
		}
		for (i = 0; i < ht->size; i++)
		{
			current = ht->array[i];
			while (current != NULL)
			{
				old = current;
				current = current->next;
				free_node(old);
			}
		}
		free(ht->array);
		free(ht);
	}
}
