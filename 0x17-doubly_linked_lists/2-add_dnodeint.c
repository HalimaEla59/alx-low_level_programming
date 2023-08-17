#include "lists.h"

/**
 * add_dnodeint - adds node at the beginning
 * @head: pointer to the head
 * @n: int
 * Return: address of the new node or NULL
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *res;

	res = malloc(sizeof(dlistint_t));
	if (res == NULL)
		return (NULL);
	res->n = n;
	res->next = NULL;
	res->prev = NULL;
	if ((*head) == NULL)
	{
		*head = res;
		return (res);
	}
	else
	{
		(*head)->prev = res;
		res->next = *head;
		*head = res;
		return (res);
	}
}
