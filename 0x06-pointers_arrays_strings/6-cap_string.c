#include "main.h"

/**
 * cap_string - capitalizes all the words of a string
 *
 * @s: string
 * Return: pointer to the resulting string
 */

char *cap_string(char *s)
{
	int i = 0;
	//int j = 0;
	//char sp[13] = {44, 59, 46, 33, 63, 34, 40, 41, 123, 125, 32, 10, 9};

	while (s[i] != '\0')
	{
		while (!(s[i] >= 'a' && s[i] <= 'z'))
		{
			i++;
		}
		if (s[i - 1] == ' ' || s[i - 1] == '\t' || s[i - 1] == '\n' || s[i - 1] == ',' || s[i - 1] == ';' || s[i - 1] == '.' || s[i - 1] == '!' || s[i - 1] == '?' || s[i - 1] == '"' || s[i - 1] == '(' || s[i - 1] == ')' || s[i - 1] == '{' || s[i - 1] == '}' || i == 0)
		{
			s[i] = s[i] - 32;
		}
		i++;
	}
	return (s);
}
