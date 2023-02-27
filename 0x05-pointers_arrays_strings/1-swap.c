#include "main.h"

/**
 * swap_int - swaps two int
 *
 * @a: first pointer int
 * @b: second pointer int
 */
void swap_int(int *a, int *b)
{
	int c;
	int d;

	c = *a;
	d = *b;

	*a = d;
	*b = c;
}
