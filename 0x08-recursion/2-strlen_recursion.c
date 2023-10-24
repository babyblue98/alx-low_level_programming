#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string.
 * @s: The string to be measured.
 *
 * Return: The length of the string.
 */
int _strlen_recursion(char *s)
{
	int longit = 0; /* Initialize the length counter */

	/* Check if the current character is not NULL */
	if (*s)
	{
		longit++; /* Increment the length for each character */
		longit += _strlen_recursion(s + 1); /* Call itself with the next character */
	}

	return (longit); /* Return the total length of the string */
}
