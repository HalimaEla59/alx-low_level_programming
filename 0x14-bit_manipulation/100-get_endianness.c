#include "main.h"

/**
 * get_indianness - checkes the endianness
 * Return: 0 if big endian, 1 if little
 */

int get_endianness(void)
{
	char *c;
	int n;

	c = (char *) & n;
	return (*c + 48);
}
