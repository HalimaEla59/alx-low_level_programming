#include "main.h"

/**
 * _memset - fills memory with a constant byte
 *
 * @s: pointers pointes to the memory area
 * @b: the constant byte
 * @n: the number of bytes of the memory area
 *
 * Return: pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
