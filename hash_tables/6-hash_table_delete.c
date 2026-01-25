#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_delete - Deletes a hash table and frees all memory
 * @ht: The hash table to delete
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *current, *tmp;

	if (ht == NULL)
		return;

	/* Loop through each array index */
	for (i = 0; i < ht->size; i++)
	{
		current = ht->array[i];
		while (current)
		{
			tmp = current->next;
			free(current->key);
			free(current->value);
			free(current);
			current = tmp;
		}
	}

	free(ht->array);
	free(ht);
}
