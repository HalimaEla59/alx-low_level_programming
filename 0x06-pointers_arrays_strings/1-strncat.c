#include "main.h"

/**
 * _strncat - concatenates two strings
 *
 * @dest: char pointer (string) where n bytes of src will be added at the end
 * @src: char pointer from where we will use n bytes to concatenates
 * @n: int number of bytes to use
 * Return: pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0');
	{
		i++;
	}

	for (j = 0; src[j] != '\0' && j < n; j++)
	{
		dest[i + j] = src[j];
	}

	dest[i + j] = '\0';
	return (dest);
}
