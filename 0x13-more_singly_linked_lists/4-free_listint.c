#include "lists.h"

/**
 * free_listint - frees a listint_t
 * @head: head of listint_t
 *
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	if (head != NULL)
	{
		temp = head;
		free(head);
		head = temp->next;
	}
}
