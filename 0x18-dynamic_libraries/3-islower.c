#include "main.h"
/**
 * _islower - checks for lowercase character
 *
 * @c: the given character to check
 *
 * Return: 1 if c is lowercase and 0 otherwise
 *
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
