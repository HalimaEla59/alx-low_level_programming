#include "main.h"
#include "2-strlen.c"

/**
 * strcpy - copies the string pointed by src to the buffer pointed by dest
 *
 * @dest: pointer char
 * @src: pointer char
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; i <= _strlen(src); i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
