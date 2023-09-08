#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table.
 * @ht: the hash table
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned int i;
	hash_node_t *htarr, *temp;

	for (i = 0; i < ht->size; i++)
	{
		htarr = ht->array[i];
		while (htarr)
		{
			temp = htarr->next;
			free(htarr->key);
			free(htarr->value);
			free(htarr);
			htarr = temp;
		}
	}
	free(ht->array);
	free(ht);
}
