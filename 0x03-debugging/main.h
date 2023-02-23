#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>

/**
 * positive_or_negative - checks the given number's sign
 * @i: the given integer
 */
void positive_or_negative(int i);

/**
 * largest_number - returns the largest of the 3 numbers
 * @a: first int
 * @b: second int
 * @c: third int
 * Return: largest int
 */
int largest_number(int a, int b, int c);

/**
 * print_remaining_days - takes a date and prints how many days are
 * left in the year, taking leap years into account
 * @month: month in number format
 * @day: day of month
 * @year: year
 * Return: void
 */
void print_remaining_days(int month, int day, int year);

#endif /* MAIN_H */
