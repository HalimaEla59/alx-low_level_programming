#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table.
 * @ht: the hash table
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned int last, i = 0; /*last is the last key*/
	hash_node_t *res;

	if (ht == NULL)
		return;

	last = ht->size - 1;
	while (!ht->array[last] && last != 0)
		last--;

	/*printing:*/
  printf("{");
	for (i = 0; i < ht->size; i++)
	{
		res = ht->array[i];
		while (res)
		{
			printf("'%s': '%s'", res->key, res->value);
			if (i != last)
				printf(", ");
			res = res->next;
		}
	}
	printf("}");
	printf("\n");
}
