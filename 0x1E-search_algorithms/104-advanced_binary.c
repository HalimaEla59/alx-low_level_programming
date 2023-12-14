#include "search_algos.h"

/**
 * rec_advanced_search - searches by advanced binary search
 * @array: the array pointer
 * @size: size of array
 * @value: value to search for
 * Return: first index of value found, -1 otherwise
 */
int *rec_advanced_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array == NULL || size == 0)
		return (NULL);

	for (printf("Searching in array: "); i < size; i++)
		printf("%d%s", array[i], i + 1 == size ? "\n" : ", ");

	i = (size - 1) / 2;
	if (array[i] == value)
	{
		if (i)
			return (rec_advanced_search(array, i + 1, value));
		return (array + i);
	}
	else if (array[i] > value)
		return (rec_advanced_search(array, i + 1, value));
	else
		return (rec_advanced_search(array + i + 1, size - i - 1, value));
}

/**
 * advanced_binary - searches by advanced binary search
 * @array: the array pointer
 * @size: size of the array
 * @value: value to search for
 * Return: first index of value found, -1 otherwise
 */

int advanced_binary(int *array, size_t size, int value)
{
	int *abs = rec_advanced_search(array, size, value);

	if (abs == NULL)
		return (-1);
	else
		return (abs - array);
}
