#include "hash_tables.h"

/**
 * hash_table_create - creates hash table
 * @size: size of table
 * Return: a pointer to a created hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned int i;
	hash_table_t *resTab;

	if (size > 0)
	{
		resTab = malloc(sizeof(hash_table_t));
		if (!resTab)
			return (NULL);

		resTab->size = size;
		resTab->array = malloc(sizeof(hash_node_t *) * size);
		if (!resTab->array)
		{
			free(resTab);
			return (NULL);
		}
		for (i = 0; i < size; i++)
			resTab->array[i] = NULL;
		return (resTab);
	}
	return (NULL);
}
