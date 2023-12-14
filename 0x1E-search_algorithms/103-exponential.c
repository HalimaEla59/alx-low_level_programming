#include "search_algos.h"
#include "1-binary.c"

/**
 * exponential_search - searches by exponential search
 * @array: the array, pointer
 * @size: size of the array
 * @value: value to search for
 * Return: first index found, -1 otherwise
 */

int exponential_search(int *array, size_t size, int value)
{
	size_t i = 1, size2 = 0;
	int bs;

	if (array == NULL || size == 0)
		return (-1);

	while (i < size && array[i] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		i <<= 1;
	}
	size2 = (i >= size ? size : i + 1) - (i >> 1);
	i >>= 1;
	printf("Value found between indexes [%lu] and [%lu]\n",
			i, i << 1 >= size ? size - 1 : i << 1);
	bs = binary_search(array + i, size2, value);

	return (bs == -1 ? bs : bs + (int)i);
}
