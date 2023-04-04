#include "lists.h"

/**
 * print_listint - prints all elem of listint_t
 * @h: singly linkend list listint_t
 * Return: number of nodes
 */

size_t print_listint(listint_t *h)
{
	size_t size = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		size++;
		h = h->next;
	}

	return (size);
}
