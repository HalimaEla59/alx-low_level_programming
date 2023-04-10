#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: unsigned long int pointer
 * @index: the index
 * Return: -1 if error, 1 otherwise
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int len;

	len = sizeof(n) * 8;

	if (index <= len)
	{
		*n = (~(1 << index) & *n);
		return (1);
	}

	return (-1);
}
