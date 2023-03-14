#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: the first str
 * @s2: the second str
 * Return: NULL if no space or failure, else pointer to the result
 */

char *str_concat(char *s1, char *s2)
{
	int i;
	int j;
	int k;
	int l;
	char *array;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
	{
	}

	for (j = 0; s2[j] != '\0'; j++)
	{
	}
	j = j + 1;

	array = malloc(sizeof(char) * (i + j));

	if (array == NULL)
		return (NULL);
	for (k = 0; k < i; k++)
	{
		array[k] = s1[k];
	}
	for (l = 0; l < j; l++)
	{
		array[i + l] = s2[l];
	}
	array[i + j] = '\0';
	return (array);
}
