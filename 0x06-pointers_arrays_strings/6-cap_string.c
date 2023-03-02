#include "main.h"

/**
 * _indexOf - checks for special characters (boolean)
 * 
 * @c: the given character
 * Return: true or false
 */

int _indexOf(char c)
{
	int i;
	char SpChArray[13] = {' ', '.', ',', ';', ',', '!', '?', '(', ')', '{', '}', '\n', '\t'};

	for (i = 0; i < 13; i++)
	{
		if (SpChArray[i] == a)
			return (1);
	}
	return (0);
}

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
		if (_indexOf(s[i]))
			continue;
		if (s[i] >= 'a' && s[i] <= 'z' && (_indexOf(s[i - 1]) || i == 0))
			s[i] = s[i] - 32;
	}
	return (s);
}
