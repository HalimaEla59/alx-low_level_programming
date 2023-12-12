#include "search_algos.h"
#include <math.h>

/**
 * jump_search - searches for value in sorted array of ints by Jump search algo
 * @array: the array, pointer to the first element
 * @size: number of elements in array
 * @value: value to search for
 * Return: the first index of value, otherwise -1
 */

int jump_search(int *array, size_t size, int value)
{
	size_t i, first = 0, last = sqrt(size);

	if (array == NULL || size == 0)
		return (-1);

	while (array[last] < value && first < size)
	{
		printf("Value checked array[%ld] = [%d]\n", last, array[last]);
		first = last;
		last = last + sqrt(size);
		i = last;
		if (last > size - 1)
			last = size;

	}

	printf("Value found between indexes [%ld] and [%ld]\n", i, last);
		if (last > size - 1)
			last = size;
	for (; i < last && array[i] < value; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);

		if (array[i] == value)
			return (i);
	}
	return (-1);
}
