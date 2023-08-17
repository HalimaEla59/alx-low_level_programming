#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes a node in list
 * @head: pointer to head
 * @index: index of node to delete
 * Return: if success 1,  if fail -1
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int i = 0;

	temp = *head;
	if ((*head) == NULL)
		return (-1);
	if (index == 0)
	{
		if ((*head)->next != NULL)
		{
			free(*head);
			*head = (*head)->next;
			(*head)->prev = NULL;
			return (1);
		}
		free(*head);
		(*head) = NULL;
		return (1);
	}
	while (temp->next && i < index)
	{
		i++;
		temp = temp->next;
	}
	if (i == index)
	{
		if (temp->next != NULL)
		{
			temp->next->prev = temp->prev;
			temp->prev->next = temp->next;
			free(temp);
		}
		else
		{
			temp->prev->next = NULL;
			free(temp);
		}
		return (1);
	}
	return (-1);
}
