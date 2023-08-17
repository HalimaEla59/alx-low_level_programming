#include "lists.h"

/**
 * dlistint_len - returns the length of linked list
 * @h: head of linked list
 * Return: size_t value
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *temp = h;
	int size = 0;

	while (temp != NULL)
	{
		size++;
		temp = temp->next;
	}
	return (size);
}
