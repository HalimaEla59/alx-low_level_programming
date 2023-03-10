#include "main.h"

/**
 * _strcat - concatenates two strings
 *
 * @dest: pointer char to past at the end in place of \\0
 * @src: pointer char to copy
 * Return: a pointer to the returning string
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}

	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i + j] = src[j];
	}

	dest[i + j] = '\0';
	return (dest);
}
