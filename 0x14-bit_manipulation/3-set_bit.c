#include "main.h"

/**
 * set_bit - sets value of a bit to the given index
 * @n: unsigned long int pointer
 * @index: the index startng from 0
 * Return: -1 if error, 1 otherwise
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int len;

	len = sizeof(n) * 8;

	if (index <= len)
	{
		*n = ((1 << index) | *n);
		return (1);
	}
	return (-1);
}
