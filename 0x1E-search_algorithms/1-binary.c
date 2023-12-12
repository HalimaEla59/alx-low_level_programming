#include "search_algos.h"

/**
 * printing - prints asked strings and array
 * @array: the array pointer
 * @first: first index of array
 * @last: last index of array
 */

void printing(int *array, size_t first, size_t last)
{
	size_t i;

	printf("Searching in array:");
	for (i = first; i <= last; i++)
	{
		if (i != last)
			printf(" %u,", array[i]);
		else
			printf(" %u\n", array[i]);
	}
}

/**
 * searching - searches through the array for value
 * @array: array to go through
 * @smallest: smallest index
 * @biggest: high end
 * @value: value to search for
 * Return: first index of the value, or -1
 */

int searching(int *array, size_t smallest, size_t biggest, int value)
{
	size_t mid = smallest + (biggest - smallest) / 2;

	printing(array, smallest, biggest);
	if (array[mid] == value)
		return (mid);
	if (smallest == biggest)
		return (-1);
	if (biggest > smallest)
	{
		if (array[mid] > value)
			return (searching(array, smallest, mid - 1, value));
		else
			return (searching(array, mid + 1, biggest,  value));
	}
	return (-1);
}

/**
 * binary_search - searches for value in sorted array using binary search
 * @array: the array, pointer to the first element
 * @size: size of the array
 * @value: the value we are searching for
 * Return: first index to the value, otherwise -1
 */

int binary_search(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);

	return (searching(array, 0, size - 1, value));
}
