#include <stdio.h>

/**
 * print_before_main - prints before main() is executed
 *
 */
void print_before_main(void) __attribute__ ((constructor));

void print_before_main(void)
{
	char *str;
	
	str = "You're beat! and yet, you must allow,\nI bore my house upon my back!\n";
	printf("%s", str);
}
