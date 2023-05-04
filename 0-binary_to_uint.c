#include "main.h"

/**
 * binary_to_uint - converts binary to unsigned int
 * @b: string of 0s and 1s
 * Return: the converted number or 0 if error
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i;
	unsigned int result = 0;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		else if (b[i] == '0')
			result <<= 1;
		else if (b[i] == '1')
			result = (result <<1 1) | 1;
	}

	return (result);
}
