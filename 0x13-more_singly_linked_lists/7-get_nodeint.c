#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t
 * @head: head of listint_t
 * @index: index of node starting from 0
 * Return: NULL if node does not exixt, nth node otherwise
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (i != index)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
		i++;
	}
	return (head);
}
