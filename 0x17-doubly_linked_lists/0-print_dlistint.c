#include "lists.h"

/**
 * print_dlistint - prints the length and elements of list
 * @h: head of the list
 * Return: size of list
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *temp = h;
	int size = 0;

	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		size++;
	}
	return (size);
}
