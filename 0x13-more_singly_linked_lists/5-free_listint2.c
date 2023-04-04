#include "lists.h"

/**
 * free_listint2 - frees listint_t, sets head to NULL
 * @head: pointer to listint_t head
 */

void free_listint2(listint_t **head)
{
	listint_t *temp1, *temp2;

	if (head != NULL)
	{
		temp1 = *head;
		while (temp1 != NULL)
		{
			temp2 = temp1;
			temp1 = temp1->next;
			free(temp2);
		}
		*head = NULL;
	}
}
