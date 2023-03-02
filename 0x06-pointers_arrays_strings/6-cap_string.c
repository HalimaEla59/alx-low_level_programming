#include "main.h"

/**
 * cap_string - capitalizes all the words of a string
 *
 * @s: string
 * Return: pointer to the resulting string
 */

char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (indexOf(s[i]))
			continue;
		if (s[i] >= 'a' && s[i] <= 'z' && (indexOf(s[i - 1]) || i == 0))
			s[i] = s[i] - 32;
	}
	return (s);
}
