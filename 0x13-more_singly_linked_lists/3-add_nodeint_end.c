#include "lists.h"

/**
 * add_nodeint_end - adds node at the end of listint_t
 * @head: pointer to head of listint_t
 * @n: element to add
 * Return: @ of new element or NULL
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *list, *temp;

	temp = *head;
	list = malloc(sizeof(listint_t));
	if (list == NULL)
		return (NULL);

	list->n  = n;
	list->next = NULL;

	if (*head == NULL)
	{
		*head = list;
		return (list);
	}
	else
	{
		while (temp->next != NULL)
			temp = temp->next;

		temp->next = list;
		return (list);
	}
}
