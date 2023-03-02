#include "main.h"

/**
 * reverse_array - reverses the content of n array of int
 *
 * @a: array of int
 * @n: number of elements of the array
 */

void reverse_array(int *a, int n)
{
	int t;
	int i;

	for (i = 0; i < n / 2; i++)
	{
		t = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = t;
	}

}
