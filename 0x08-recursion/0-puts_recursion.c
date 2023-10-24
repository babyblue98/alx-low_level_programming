#include "main.h"

/**
 * _puts_recursion - Prints a string recursively.
 * @s: Input string to be printed.
 * Return: Always 0 (Success).
 */
void _puts_recursion(char *s)
{
	/* If the current character is not NULL */
	if (*s)
	{
		/* Print the current character */
		_putchar(*s);
		/* Call _puts_recursion with the next character in the string */
		_puts_recursion(s + 1);
	}
	/* If the current character is NULL, print a newline character */
	else
		_putchar('\n');
}
