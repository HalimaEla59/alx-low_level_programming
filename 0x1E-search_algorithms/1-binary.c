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
	size_t i, biggest, mid, smallest;

	if (array == NULL)
		return (-1);

	smallest = 0;
	biggest = size - 1;
	while (smallest <= biggest)
	{
		mid = (biggest + smallest) / 2;
		printf("Search in array: ");
		for (i = smallest; i <= biggest; i++)
			printf("%d%s", array[i], i == biggest ? "\n" : ",");
		if (array[mid] < value)
			smallest = mid + 1;
		else if (array[mid] > value)
			biggest = mid - 1;
		else
			return (mid);
	}
	return (-1);
}
