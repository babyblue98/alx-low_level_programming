#include <stdio.h>

void execute_before_main(void) __attribute__ ((constructor));

/**
 * execute_before_main - prints a sentence before the main function is executed
 */
void execute_before_main(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
