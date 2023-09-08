#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table.
 * @ht: the hash table
 * @key: key  can not be an empty string
 * @value: value associated with the key
 * Return: 1 if it succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;
	hash_node_t *checker, *res;

	if (!ht || !ht->size || !strlen(key))
		return (0);
	idx = key_index((const unsigned char *)key, ht->size);
	checker = ht->array[idx];
	while (checker)
	{
		if (!strcmp(checker->key, key))
		{
			free(checker->value);
			checker->value = strdup((char *)value);
			if (!checker->value)
				return (0);
			return (1);
		}
		checker = checker->next;
	}

	res = malloc(sizeof(hash_node_t));
	if (!res)
		return (0);
	res->key = strdup((char *)key);
	if (!res->key)
	{
		free(res);
		exit(0);
	}
	res->value = strdup((char *)value);
	if (!res->value)
	{
		free(res->value);
		free(res);
		return (0);
	}
	res->next = ht->array[idx];
	ht->array[idx] = res;
	return (1);
}
