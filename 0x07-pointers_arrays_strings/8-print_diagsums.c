#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of two diagonals of square matrix of ints
 * @a: 2D array or matrix
 * @size: the size
 */
void prind_diagsums(int *a, int size)
{
	int i;
	int d1 = 0;
	int d2 = 0;

	for (i = 0; i < size; i++)
	{
		d1 += a[(i * size) + i];
		d2 += a[(size - 1) + ((size - 1) * i)];
	}
	printf("%d,%d\n", d1, d2);
}
