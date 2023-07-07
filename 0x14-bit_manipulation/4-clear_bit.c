#include "main.h"

/**
 * clear_bit - sets the value at the index to 0
 * @n: unsigned long int
 * @index: given index
 * Return: 1 if success, -1 if error
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
