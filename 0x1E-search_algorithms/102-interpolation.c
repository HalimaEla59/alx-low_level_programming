#include "search_algos.h"

/**
 * interpolation_search - searches by Interpolation search algorithm
 * @array: the array, pointer to the first index
 * @size: size of array
 * @value: value to search for
 * Return: first index of value found, -1 otherwise
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t position, smallest, biggest;
	double f;

	if (array == NULL)
		return (-1);

	smallest = 0;
	biggest = size - 1;

	while (size)
	{
		f = (double)(biggest - smallest) /
      (array[biggest] - array[smallest]) * (value - array[smallest]);
		position = (size_t)(smallest + f);
		printf("Value checked array[%d]", (int)position);

		if (position >= size)
		{
			printf(" is out of range\n");
			break;
		}
		else
		{
			printf(" = [%d]\n", array[position]);
		}

		if (array[position] == value)
			return ((int)position);

		if (array[position] < value)
			smallest = position + 1;
		else
			biggest = position - 1;

		if (smallest == biggest)
			break;
	}

	return (-1);
}
