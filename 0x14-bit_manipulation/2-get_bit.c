#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: unsigned long int
 * @index: teh index starting from 0
 * Return: th vale of bit at index, -1if error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int len;

	len = sizeof(n) * 8;

	if (index > len)
		return (-1);

	return ((n >> index) & 1);
}
