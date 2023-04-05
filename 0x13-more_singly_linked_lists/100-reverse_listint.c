#include "lists.h"

/**
 * reverse_listint - reverses a listint_t
 * @head: pointer to listint_t head
 * Return: pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp1, *temp2;

	temp1 = *head;
	if (temp == NULL)
		return (NULL);

	temp2 = temp1->next;
	temp1->next = NULL;

	while (temp2 != NULL)
	{
		temp1 = temp2;
		temp2 = temp2->next;
		temp1->next = *head;
		*head = temp1;
	}
	return (*head);
}
