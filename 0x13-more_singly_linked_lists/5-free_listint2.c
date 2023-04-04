#include "lists.h"

/**
 * free_listint2 - frees listint_t, sets head to NULL
 * @head: pointer to listint_t head
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head != NULL)
	{
		while (head != NULL)
		{
			temp = head;
			head = head->next;
			free(temp);
		}
		*head = NULL;
	}
}
