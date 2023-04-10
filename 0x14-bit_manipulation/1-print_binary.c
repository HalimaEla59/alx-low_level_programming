#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: the number
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1); /* <=> n//2*1 */

	_putchar((n & 1) + '0'); /* 0 if n&1 false 1 otherwise */
}
