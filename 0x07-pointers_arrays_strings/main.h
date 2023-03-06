#ifndef _MAIN_H
#define _MAIN_H

/**
 * _putchar - writes the character c
 * @c: the character char
 * Return: 1 or 0
 */
int _putchar(char c);

/**
 * _memset - fills memory with a constant byte
 * @s: pointers to the memory area
 * @b: constant byte
 * @n: the number of bytes to fill
 * Return: pointer to the memory are
 */
char *_memset(char *s, char b, unsigned int n);

/**
 * _memcpy - copies memory area
 * @dest: pointer to the destination
 * @src: pointer source
 * @n: number of bytes to copy from src
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n);

/**
 * _strchr - locates a character in a string
 * @s: the string
 * @c: the characater
 * Return: a pointer to the first occurence of c otherwise NULL
 */
char *_strchr(char *s, char c);

/**
 * _strspn - gets the lenght of a prefix substring
 * @s: string
 * @accept: contains the bytes
 * Return: the bytes from the initial segrment of s which consistes of only bytes from accept
 */
unsigned int _strspn(char *s, char *accept);

/**
 * _strpbrk - searches a string s for any of a set of bytes in accept
 * @s: string
 * @accept: string
 * Return: pointer to the byte in s that matches the bytes in accept, otherwise NULL
 */
char *_strpbrk(char *s, char *accept);

/**
 * _strstr - locates a substring needle in a string haystack
 * @haystack: string
 * @needle: the substring
 * Return: pointer to the begining of the located substring, NULL otherwise
 */
char *_strstr(char *haystack, char *needle);

/**
 * print_chessboard - prints the chessboard
 * @a: 2D array
 */
void print_chessboard(char (*a)[8]);

/**
 * print_diagsums - prints the sum of two diagonals of a square matrix of ints
 * @a: matrix of ints
 * @size: the size
 */
void print_diagsums(int *a, int size);

#endif
