#include "lists.h"

/**
 * insert_dnodeint_at_index - insert node at given index
 * @h: pointer to head
 * @idx: index where to insert
 * @n: int value of node
 * Return: return the new node or NULL
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp, *res;
	unsigned int i = 1;

	temp = *h;
	res = malloc(sizeof(dlistint_t));
	if (res == NULL)
		return (NULL);
	res->n = n;
	res->next = NULL;
	res->prev = NULL;
	if ((*h) == NULL)
	{
		if (idx == 0)
		{
			*h = res;
			return (res);
		}
		return (NULL);
	}
	if (idx == 0)
	{
		res->next = *h;
		(*h)->prev = res;
		*h = res;
		return (res);
	}
	while (temp->next != NULL && i < idx)
	{
		temp = temp->next;
		i++;
	}
	if (i == idx)
	{
		res->prev = temp;
		res->next = temp->next;
		if (temp->next != NULL)
			temp->next->prev = res;
		temp->next = res;
		return (res);
	}
	return (NULL);
}
