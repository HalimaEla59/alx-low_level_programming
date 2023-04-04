#include "lists.h"

/**
 * add_nodeint - add new node at begining of listint_t
 * @head: pointer to head of listint_t
 * @n: element to add
 * Return: @ of n or NULL
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *list;

	list = malloc(sizeof(listint_t));
	if (list == NULL)
		return (NULL);

	list->n = n;
	list->next = *head;
	*head = list;

	return (*head);
}
