#include "lists.h"

/**
 * list_len - returns the numb of elem in linked list
 * @h: head node
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}

	return (i);
}
