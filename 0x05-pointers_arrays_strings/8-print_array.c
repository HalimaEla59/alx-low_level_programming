#include "main.h"
#include "2-strlen.c"

/**
 * print_array - prints n numbers from the the array
 *
 * @a: poinet int
 * @n: number of ints to be printed
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
			printf(", ");
	}
	
	printf("\n");
}
