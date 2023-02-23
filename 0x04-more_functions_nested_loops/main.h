#ifndef _MAIN_H
#define _MAIN_H

/**
 * _putchar - writes the character c
 * @c: the given character to write
 * Return: 0 or 1
 */
int _putchar(char c);

/**
 * _isupper - checks for uppercase character
 * @c: the given character
 * Return: 1 if uppercase, 0 otherwise
 */
int _isupper(int c);

/**
 * _isdigit - checks for a digit
 * @c: the given input to check
 * Return: 1 if a digit, 0 otherwise
 */
int _isdigit(int c);

/**
 * mul - multiplies two integers
 * @a: first integer
 * @b: second integer
 * Return: the result
 */
int mul(int a, int b);

/**
 * print_numbers - prints numbers from 0 to 9
 */
void print_numbers(void);

/**
 * print_most_numbers - prints as above without 2 and 4
 */
void print_most_numbers(void);

/**
 * more_numbers - prints numb from 0 to 14 10 times
 */
void more_numbers(void);

/**
 * print_line - draws a straight line
 * @n: number of _ to print
 */
void print_line(int n);

/**
 * print_diagonal - draws a diagonal line
 * @n: number of \ to draw
 */
void print_diagonal(int n);

/**
 * print_square - prints a square
 * @size: size of square
 */
void print_square(int size);

/**
 * print_triangle - prints a triangle
 * @size: size of triangle
 */
void print_triangle(int size);

#endif /* MAIN_H */
