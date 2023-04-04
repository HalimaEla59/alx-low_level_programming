#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t
 * @head: pointer to head of listint_t
 * Return: the head node data (n) or 0 if empty
 */

int pop_listint(listint_t **head)
{
	int n = 0;
	listint_t *temp;

	temp = *head;

	if (temp == NULL)
		return (n);

	n = temp->n;
	*head = temp->next;
	free(temp);
	return (n);
}
