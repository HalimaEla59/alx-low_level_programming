#include "search_algos.h"

/**
 * binary_search - searches for value in sorted array using binary search
 * @array: the array, pointer to the first element
 * @size: size of the array
 * @value: the value we are searching for
 * Return: first index to the value, otherwise -1
 */

int binary_search(int *array, size_t size, int value)
{
	size_t i, biggest, smallest;

	if (array == NULL)
		return (-1);

	for  (smallest = 0, biggest = size - 1; smallest <= biggest;)
	{
		printf("Search in array:");
		for (i = smallest; i < biggest; i++)
			printf(" %d,", array[i]);
		printf(" %d\n", array[i]);

		i = smallest + (biggest - smallest) / 2;

		if (array[i] < value)
			smallest = i + 1;
		else if (array[i] > value)
			biggest = 1 - 1;
		else
			return (i);
	}
	return (-1);
}
