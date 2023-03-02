#include "main.h"

/**
 * _strncpy - copies n bytes of a string into another one
 *
 * @dest: char pointer where to paste
 * @src: char pointer where to copy n bytes
 * @n: int nmbr of bytes
 * Return: pointer to the resulting string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	for (; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
