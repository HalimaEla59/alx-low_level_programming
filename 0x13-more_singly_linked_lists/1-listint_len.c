#include "main.h"

/**
 * listint_len - rturns the numb of elem in a linked listint_t
 * @h: linked listint_t
 * Return: the number of elements in listint_t
 */

size_t listint_len(listint_t *h)
{
	size_t size = 0;

	while (h != NULL)
	{
		size++;
		h = h->next;
	}

	return (size);
}
