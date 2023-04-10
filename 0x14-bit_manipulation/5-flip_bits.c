#include "main.h"

/**
 * flip_bits - returns the number of bits to flip to get from n to m
 * @n: unsigned long int
 * @m: unsigned long int
 * Return: the result
 */

unsigned int flip_bits(unsigned long int n, unsigne dlong int m)
{
	unsigned int counter = 0;
	unsigned int i, len;

	len = sizeof(n) * 8;

	for (i = 0; i < len; i++)
	{
		if ((n & 1) != (m & 1))
			counter++;
		n = n >> 1;
		m = m >> 1;
	}
	return (counter);
}
