#include "main.h"

/**
 * binary_to_uint - converts a binary num to unsignd int
 * @b: string of ones and zeros (binary number)
 * Return: converted number or 0 if b is NULL or not only 1 and 0
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
			result <<= 1; /* equivalent to result *= 2^1 */
		else if (b[i] == '1')
			result = (result << 1) | 1;
	}
	return (result);
}
