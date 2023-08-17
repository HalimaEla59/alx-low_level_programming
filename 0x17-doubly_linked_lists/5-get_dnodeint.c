#include "lists.h"

/**
 * get_dnodeint_at_index - gets the node at given index
 * @head: head of the linked list
 * @index: index of the node
 * Return: address of the node or NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp = head;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	while (temp != NULL && i < index)
	{
		i++;
		temp = temp->next;
	}
	if (index == i)
		return (temp);
	else
		return (NULL);
}
