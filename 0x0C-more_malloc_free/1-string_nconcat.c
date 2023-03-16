#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - concatenates s1 and n bytes of s2
 * @s1: first string
 * @s2: second string
 * @n: number of bytes
 * Return: pointer to new allocated space or NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j;
	unsigned int size1 = 0;
	unsigned int size2 = 0;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";


	while (s1[size1] != '\0')
	{
		size1++;
	}

	while (s2[size2] != '\0')
	{
		size2++;
	}

	if (n >= size2)
		n = size2;

	ptr = malloc(sizeof(char) * (size1 + n + 1));
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < size1; i++)
	{
		ptr[i] = s1[i];
	}
	for (j = 0; j < n; i++)
	{
		ptr[i + j] = s2[j];
	}
	ptr[i + j + 1] = '\0';

	return (ptr);
}
