#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * create_array - creates an array of chars initialised with a specific char
 * @size: size of the array
 * @c: the initial char
 * Return: NULL if size = 0 or error, else pointer to the string
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

	array = malloc(sizeof(char) * size);

	if (size == 0 || array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}
