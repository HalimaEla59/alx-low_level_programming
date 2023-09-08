#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: the hash table
 * @key: the key we are looking for
 * Return: key value, NULL if key can’t be found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx;
	hash_node_t *res;

	if (!ht || ht->size == 0 || strlen(key) == 0)
		return (NULL);

	idx = key_index((const unsigned char *)key, ht->size);
	res = ht->array[idx];
	while (res)
	{
		if (!strcmp(res->key, key))
			return (res->value);
		res = res->next;
	}
	return (NULL);
}
