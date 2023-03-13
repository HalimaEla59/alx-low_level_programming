#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * _strdup - returns a pointer to a new str that is a duplicate of the given str
 * @str: the given string
 * Return: NULL if no memory or str = NULL, otherwise pointer to the dup str
 */

char *_strdup(char *str)
{
	int i;
	int size;
	char *array;

	if (str == NULL)
	{
		return (NULL);
	}
	for (size = 0; str[size] != '\0'; size++)
	{
	}
	size = size + 1;
	array = malloc(sizeof(char) * size);
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		array[i] = str[i];
	}
	return (array);
}
