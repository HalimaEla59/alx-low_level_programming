#ifndef _MAIN_H
#define _MAIN_H

/**
 * _putchar - writes a character
 * @c: given character
 * Return: 0 or 1
 */
int _putchar(char c);

/**
 * reset_to_98 - updates the value it pounts to to 98
 * @n: pointer int
 */
void reset_to_98(int *n);

/**
 * swap_int - swaps the value of two int
 * @a: first pointer int
 * @b: second pointer int
 */
void swap_int(int *a, int *b);

/**
 * _strlen - returns the length of a string
 * @s: pointer char
 * Return: the length of the string
 */
int _strlen(char *s);

/**
 * _puts - prints a string
 * @str: pointer char
 */
void _puts(char *str);

/**
 * print_rev - prints a string in reverse
 * @s: pointer char
 */
void print_rev(char *s);

/**
 * rev_string - reverses a string
 * @s: pointer char
 */
void rev_string(char *s);

/**
 * puts2 - prints every other character of a string
 * @str: pointer char
 */
void puts2(char *str);

/**
 * puts_half - prints the second half of a string
 * @str: pointer char
 */
void puts_half(char *str);

/**
 * print_array - prints n element of an array of int
 * @a: pointer int
 * @n: nmbr of elements to be printed
 */
void print_array(int *a, int n);

/**
 * _strcpy - copies the string pointed to by src to the buffer pointed to by dest
 * @dest: pointer char
 * @src: pointer char
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src);

#endif
