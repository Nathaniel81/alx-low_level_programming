#include <stdio.h>

/**
 * print_the_text - Prints the text before the main function is executed.
 *
 */

void __attribute__((constructor)) print_the_text(void)
{
	printf("You're beat! and yet, you must allow,\n"
			"I bore my house upon my back!\n");
}
