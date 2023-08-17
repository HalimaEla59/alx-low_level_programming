#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the values
 * @head: head of list
 * Return: sum int
 */

int sum_dlistint(dlistint_t *head)
{
	const dlistint_t *temp = head;
	int sum = 0;

	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
