#include "main.h"

/**
 * _strlen - returns the length of a string
 *
 * @s: pointer char
 * Return: the length
 */

int _strlen(char *s)
{
	char i;
	int len;

	len = 0;

	for ( i = s[0]; i = '\0'; i++)
		len ++;
	return (len);
}
