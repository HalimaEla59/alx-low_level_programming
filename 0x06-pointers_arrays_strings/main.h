#ifndef _MAIN_H
#define _MAIN_H

/**
 * _putchar - printsa char
 * @c: char to print
 * Return: 0 or 1
 */
int _putchar(char c);

/**
 * _strcat - concatenates two strings
 * @dest: char pointer to past into it's \\0
 * @src: char pointer to cat
 * return: pointer to the result string
 */
char *_strcat(char *dest, char *src);

/**
 * _strncat - concatenates two strings using at most n bytes from src
 * @dest: char pointer where to past
 * @src: char pointer to cat (doen't need to be null terminated as we will use n bytes)
 * @n: int nmbr of bytes from src that will be added at the end of dest
 * Return: pointer to the resulting string
 */
char *_strncat(char *dest, char *src, int n);

/**
 * _strncpy - copies a string
 * @dest: char pointer (like above)
 * @src: char pointer (like above)
 * @n: int nmbr of bytes from src that will replace dest from its begining
 * Return: the resulting char
 */
char *_strncpy(char *dest, char *src, int n);

/**
 * _strcmp - compares two strings
 * @s1: first char pointer
 * @s2: second char pointer
 * Return: the integre result of the comparaison
 */
int _strcmp(char *s1, char *s2);

/**
 * reverse_array - reverses the content of an array of ints
 * @a: int pointer (the array)
 * @n: number of elements of the array
 */
void reverse_array(int *a, int n);

/**
 * string_toupper - changes all lowercase latters of a string to uppercase
 * @s: char pointer
 * Return: pointer to the result
 */
char *string_toupper(char *s);

/**
 * cap_string - capitalazes all words of a string
 * @s: char pointer
 * Return: pointer to the result
 */
char *cap_string(char *s);

/**
 * leet - encodes a string into 1337
 * @s: char pointer
 * Return: pointer to the result
 */
char *leet(char *s);

#endif
