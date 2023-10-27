#include "main.h"

/**
 * get_endianness - Checks the endianness of the system.
 *
 * Return: 0 if the system is big-endian, 1 if it is little-endian.
 */
int get_endianness(void)
{
	int a;
	char *b;

	a = 1; /* Assign the value 1 to the integer variable a */
	b = (char *)&a; /* Interpret the memory representation of a as a character */

	return (*b); /* Return the value to determine the endianness */
}
