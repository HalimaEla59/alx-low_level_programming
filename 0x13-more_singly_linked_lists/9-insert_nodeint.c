#include "lists.h"

/**
 * insert_nodeint_at_index - inserts new node at the given index
 * @head: pointer to the listint_t head
 * @idx: the given index
 * @n: new node data
 * Return: @ of new node, NULL if fail
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *temp, *newlist;

	temp = *head;
	if (head == NULL)
		return (NULL);

	if (temp == NULL && idx != 0)
		return (NULL);

	newlist = malloc(sizeof(listint_t));
	if (newlist == NULL)
		return (NULL);
	newlist->n = n;

	if (idx == 0)
	{
		newlist->next = *head;
		*head = newlist;
		return (newlist);
	}
	while (i != idx - 1)
	{
		temp = temp->next;
		if (temp == NULL)
		{
			free(newlist);
			return (NULL);
		}
		i++;
	}
	newlist->next = temp->next;
	temp->next = newlist;
	return (newlist);
}
