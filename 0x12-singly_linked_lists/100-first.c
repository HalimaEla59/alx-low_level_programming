#include <stdio.h>

/**
 * print_before_main - prints before main() is executed
 *
 */
void print_before_main(void) __attribute__ ((constructor));

void print_before_main(void)
{
	char *str1, *str2;

	str1 = "You're beat! and yet, you must allow,\n";
	str2 = "I bore my house upon my back!\n";
	printf("%s%s", str1, str2);
}
