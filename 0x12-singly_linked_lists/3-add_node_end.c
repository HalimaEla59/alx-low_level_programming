#include "lists.h"
#include <string.h>

/**
 * add_node_end - adds new node at the end
 * @head: pointer to head
 * @str: string to add
 * Return: @ to new element or NULL
 */

list_t *add_node_end(list_t **head, const char *str)
{
	int i = 0;
	list_t *node, *L;

	node = malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL);

	while (str[i])
	{
		i++;
	}

	node->str = strdup(str);
	node->len = i;
	node->next = NULL;

	if (strdup(str) == NULL)
	{
		free(node);
		return (NULL);
	}
	if (*head == NULL)
	{
		*head = node;
		return (node);
	}
	else
	{
		L = *head;
		while (L->next != NULL)
			L = L->next;
		L->next = node;
		return (node);
	}
}
