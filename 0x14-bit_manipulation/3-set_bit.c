#include "main.h"

/**
 * set_bit - sets the value of abit to one at a given index
 * @n: unsigned long int pointer
 * @index: the index starting form 0 of the bit
 * Return: -1 if error, 1 otherwise
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int len;

	len = sizeof(n) * 8;

	if (index > len)
	{
		*n = *n | (1 << index);
		return (1);
	}
	return (-1);
}
