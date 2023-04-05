#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at index in listint_t
 * @head: pointer to listint_t head
 * @index: index of the node that should be deleted
 * Return: 1 if success, -1 if fail
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp1, *temp2;
	unsigned int i = 0;

	temp1 = *head;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = temp1->next;
		free(temp1);
		return (1);
	}

	while (i != index)
	{
		temp2 = temp1;
		temp1 = temp1->next;
		if (temp1 == NULL)
			return (-1); /*index does not exist*/
		i++;
	}

	temp2->next = temp1->next;
	free(temp1);
	return (1);
}
