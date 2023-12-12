#include "search_algos.h"

/**
 * linear_seach - searches for a val in an array of ints
 * @array: the array where to search
 * @size: number of elements in array
 * @value: value to search for
 * Return: first index where value is located, otherwise -1
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
