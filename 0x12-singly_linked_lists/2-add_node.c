#include "lists.h"
#include <string.h>

/**
 * add_node - adds new node at the beginning
 * @head: pointer to head of list
 * @str: string to add
 * Return: @ of the new element or NULL
 */

list_t *add_node(list_t **head, const char *str)
{
	int i = 0;
	list_t *node;

	node = malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL);

	while (str[i])
	{
		i++;
	}

	node->str = strdup(str);
	node->len = i;
	node->next = *head;
	*head = node;

	return (node);
}
