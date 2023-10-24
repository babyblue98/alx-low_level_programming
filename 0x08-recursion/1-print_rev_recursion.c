#include "main.h"

/**
 * _print_rev_recursion - Prints a string in reverse.
 * @s: The string to be printed.
 */
void _print_rev_recursion(char *s)
{
	/* Check if the current character is not NULL */
	if (*s)
	{
		/* Calls itself with the next character in the string */
		_print_rev_recursion(s + 1);
		/* Prints the current character */
		_putchar(*s);
	}
}
