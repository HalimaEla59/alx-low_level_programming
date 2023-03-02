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
	int j = 0;
	char sp[13] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};

	for (i = 0; s[i] != '\0'; i++)
	{

		while (j < 13)
		{
			if (s[i] <= 'a' && s[i] >= 'z' && (s[i - 1] == sp[j] || i == 0))
				s[i] = s[i] - 32;
			i++;
		}

	}

	return (s);
}
