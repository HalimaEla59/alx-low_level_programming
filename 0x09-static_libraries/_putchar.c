#include <unistd.h>

/**
 * _putchar - writes the given char
 * @c: character to print
 * Return: 1 if successful, -1 if error
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
