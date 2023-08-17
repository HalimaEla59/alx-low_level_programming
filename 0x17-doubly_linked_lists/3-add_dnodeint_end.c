#include "lists.h"

/**
 * add_dnodeint_end - adds node at the end
 * @head: pointer to head
 * @n: int new node
 * Return: address of the new node or NULL
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp, *res;

	temp = *head;
	res = malloc(sizeof(dlistint_t));
	if (res == NULL)
		return (NULL);
  
	res->n = n;
  res->prev = NULL;
	res->next = NULL;
	if ((*head) == NULL)
	{
		*head = res;
		return (res);
	}
	while (temp->next)
	{
		temp = temp->next;
	}
	res->prev = temp;
	temp->next = res;
	return (res);
}
